#include <SDL.h>
#include <stdio.h>
#include <stdlib.h> // rand(), srand()를 위해 필요
#include <time.h>   // 랜덤 시드 설정을 위해 필요

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define HERO_WIDTH  63
#define HERO_HEIGHT 87
#define SLIME_SIZE 32
#define MOVE_SPEED 10
#define MAX_SLIMES 30 // 슬라임 마리 수 (30마리 소환!)

// [NEW] 1. 몬스터(슬라임) 구조체 정의
// 몬스터마다 자기만의 위치(x, y)를 가져야 합니다.
typedef struct {
    int x;
    int y;
} Monster;

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Hero RPG", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // 랜덤 숫자 발생기 초기화 (매번 다른 위치에 나오도록)
    srand((unsigned int)time(NULL));

    // 이미지 로드 (용사 & 슬라임)
    SDL_Surface* heroSurface = SDL_LoadBMP("hero.bmp");
    SDL_Surface* slimeSurface = SDL_LoadBMP("slime.bmp"); // [NEW] 슬라임 로드

    if (!heroSurface || !slimeSurface) {
        printf("이미지 로드 실패! (hero.bmp 또는 slime.bmp 확인)\n");
        return 1;
    }
    Uint32 colorkey = SDL_MapRGB(heroSurface->format, 0, 255, 0);
    SDL_SetColorKey(heroSurface, SDL_TRUE, colorkey);
    Uint32 colorkey1 = SDL_MapRGB(slimeSurface->format, 0, 255, 0);
    SDL_SetColorKey(slimeSurface, SDL_TRUE, colorkey1);

    SDL_Texture* heroTexture = SDL_CreateTextureFromSurface(renderer, heroSurface);
    SDL_Texture* slimeTexture = SDL_CreateTextureFromSurface(renderer, slimeSurface); // [NEW]

    SDL_FreeSurface(heroSurface);
    SDL_FreeSurface(slimeSurface);

    // 용사 초기 위치
    int heroX = (WINDOW_WIDTH / 2) - (HERO_WIDTH / 2);
    int heroY = (WINDOW_HEIGHT / 2) - (HERO_HEIGHT / 2);

    // [NEW] 2. 슬라임 군단 생성 (구조체 배열)
    Monster slimes[MAX_SLIMES];

    // [NEW] 3. 반복문을 이용해 랜덤 위치에 배치
    for (int i = 0; i < MAX_SLIMES; i++) {
        // 화면 안쪽 어딘가에 랜덤하게 위치 설정
        // % 연산자를 이용해 화면 크기 안으로 숫자를 가둡니다.
        slimes[i].x = rand() % (WINDOW_WIDTH - SLIME_SIZE);
        slimes[i].y = rand() % (WINDOW_HEIGHT - SLIME_SIZE);
    }

    int running = 1;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = 0;
            else if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                case SDLK_UP:    heroY -= MOVE_SPEED; break;
                case SDLK_DOWN:  heroY += MOVE_SPEED; break;
                case SDLK_LEFT:  heroX -= MOVE_SPEED; break;
                case SDLK_RIGHT: heroX += MOVE_SPEED; break;
                }
            }
        }

        // --- 그리기 시작 ---
        SDL_SetRenderDrawColor(renderer, 0, 180, 0, 255);
        SDL_RenderClear(renderer);

        // [NEW] 4. 슬라임 군단 그리기 (반복문)
        // 도장(Texture)은 하나지만, 30번 찍어서 30마리처럼 보이게 합니다!
        for (int i = 0; i < MAX_SLIMES; i++) {
            SDL_Rect slimeRect;
            slimeRect.x = slimes[i].x; // i번째 슬라임의 x좌표
            slimeRect.y = slimes[i].y; // i번째 슬라임의 y좌표
            slimeRect.w = SLIME_SIZE;
            slimeRect.h = SLIME_SIZE;

            SDL_RenderCopy(renderer, slimeTexture, NULL, &slimeRect);
        }

        // 용사 그리기
        SDL_Rect heroRect = { heroX, heroY, HERO_WIDTH, HERO_HEIGHT };
        SDL_RenderCopy(renderer, heroTexture, NULL, &heroRect);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(heroTexture);
    SDL_DestroyTexture(slimeTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}