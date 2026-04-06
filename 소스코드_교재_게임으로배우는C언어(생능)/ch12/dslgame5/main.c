#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define HERO_WIDTH  63
#define HERO_HEIGHT 87
#define SLIME_SIZE 32
#define MOVE_SPEED 10
#define MAX_SLIMES 20

typedef struct {
    int x;
    int y;
} Monster;

// === [NEW] 1. 충돌 체크 함수 (AABB 알고리즘) ===
// 두 개의 사각형(A, B)을 받아서 겹쳤으면 1(True), 아니면 0(False)을 반환
int checkCollision(SDL_Rect a, SDL_Rect b) {
    // 1. A의 오른쪽이 B의 왼쪽보다 왼쪽에 있거나
    if (a.x + a.w < b.x) return 0;
    // 2. A의 왼쪽이 B의 오른쪽보다 오른쪽에 있거나
    if (a.x > b.x + b.w) return 0;
    // 3. A의 아래쪽이 B의 위쪽보다 위에 있거나
    if (a.y + a.h < b.y) return 0;
    // 4. A의 위쪽이 B의 아래쪽보다 아래에 있다면
    if (a.y > b.y + b.h) return 0;

    // 위 4가지 안 만나는 경우를 모두 통과했다면? 만난 것입니다!
    return 1;
}

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Hero RPG", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    srand((unsigned int)time(NULL));

    SDL_Surface* heroSurface = SDL_LoadBMP("hero.bmp");
    SDL_Surface* slimeSurface = SDL_LoadBMP("slime.bmp");

    // 이미지 로드 실패 시 안전장치
    if (!heroSurface || !slimeSurface) {
        printf("이미지 파일(hero.bmp, slime.bmp)을 확인해주세요!\n");
        return 1;
    }
    Uint32 colorkey = SDL_MapRGB(heroSurface->format, 0, 255, 0);
    SDL_SetColorKey(heroSurface, SDL_TRUE, colorkey);
    Uint32 colorkey1 = SDL_MapRGB(slimeSurface->format, 0, 255, 0);
    SDL_SetColorKey(slimeSurface, SDL_TRUE, colorkey1);

    SDL_Texture* heroTexture = SDL_CreateTextureFromSurface(renderer, heroSurface);
    SDL_Texture* slimeTexture = SDL_CreateTextureFromSurface(renderer, slimeSurface);
    SDL_FreeSurface(heroSurface);
    SDL_FreeSurface(slimeSurface);

    int heroX = (WINDOW_WIDTH / 2) - (HERO_WIDTH / 2);
    int heroY = (WINDOW_HEIGHT / 2) - (HERO_HEIGHT / 2);

    Monster slimes[MAX_SLIMES];
    for (int i = 0; i < MAX_SLIMES; i++) {
        slimes[i].x = rand() % (WINDOW_WIDTH - SLIME_SIZE);
        slimes[i].y = rand() % (WINDOW_HEIGHT - SLIME_SIZE);
    }

    int running = 1;
    // [NEW] 2. 게임 오버 상태 변수 (0: 진행 중, 1: 게임 오버)
    int gameOver = 0;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = 0;

            // [NEW] 게임 오버가 아닐 때만 키보드 입력을 받음
            if (gameOver == 0 && event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                case SDLK_UP:    heroY -= MOVE_SPEED; break;
                case SDLK_DOWN:  heroY += MOVE_SPEED; break;
                case SDLK_LEFT:  heroX -= MOVE_SPEED; break;
                case SDLK_RIGHT: heroX += MOVE_SPEED; break;
                }
            }
        }

        // === [NEW] 3. 충돌 검사 로직 ===
        if (gameOver == 0) {
            // 현재 용사의 위치 사각형 만들기
            SDL_Rect heroRect = { heroX, heroY, HERO_WIDTH, HERO_HEIGHT };

            for (int i = 0; i < MAX_SLIMES; i++) {
                // i번째 슬라임의 위치 사각형 만들기
                SDL_Rect slimeRect = { slimes[i].x, slimes[i].y, SLIME_SIZE, SLIME_SIZE };

                // 용사와 슬라임이 닿았는지 확인!
                if (checkCollision(heroRect, slimeRect)) {
                    printf("충돌 발생! 게임 오버!\n");
                    gameOver = 1; // 상태 변경
                }
            }
        }

        // --- 그리기 시작 ---

        // [NEW] 4. 상태에 따른 배경색 변경
        if (gameOver) {
            // 게임 오버 시: 무시무시한 빨간색 배경
            SDL_SetRenderDrawColor(renderer, 200, 0, 0, 255);
        }
        else {
            // 평소: 평화로운 초록색 배경
            SDL_SetRenderDrawColor(renderer, 0, 180, 0, 255);
        }
        SDL_RenderClear(renderer);

        // 슬라임 그리기
        for (int i = 0; i < MAX_SLIMES; i++) {
            SDL_Rect slimeRect = { slimes[i].x, slimes[i].y, SLIME_SIZE, SLIME_SIZE };
            SDL_RenderCopy(renderer, slimeTexture, NULL, &slimeRect);
        }

        // 용사 그리기
        SDL_Rect heroRect = { heroX, heroY, HERO_WIDTH, HERO_HEIGHT };
        SDL_RenderCopy(renderer, heroTexture, NULL, &heroRect);

        SDL_RenderPresent(renderer);
    }

    // 뒷정리
    SDL_DestroyTexture(heroTexture);
    SDL_DestroyTexture(slimeTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}