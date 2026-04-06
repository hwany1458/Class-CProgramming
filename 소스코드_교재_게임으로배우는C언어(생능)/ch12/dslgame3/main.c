#include <SDL.h>
#include <stdio.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
// 변경: 가로(Width)와 세로(Height)를 따로 정의
#define HERO_WIDTH  63
#define HERO_HEIGHT 87

// [NEW] 용사가 한 번에 이동할 거리 (속도)
#define MOVE_SPEED 10 

int main(int argc, char* argv[]) {

    // 1. 초기화 (이전과 동일)
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Hero RPG", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // 2. 이미지 로드 (이전과 동일)
    SDL_Surface* heroSurface = SDL_LoadBMP("hero.bmp");
    if (!heroSurface) return 1; // 에러 처리 간소화
    // 2. 투명하게 만들 색상을 지정합니다. 
    Uint32 colorkey = SDL_MapRGB(heroSurface->format, 0, 255, 0);

    // 그 다음 SDL_SetColorKey 함수는 그대로 두시면 됩니다.
    SDL_SetColorKey(heroSurface, SDL_TRUE, colorkey);

    // 4. 투명화 설정이 된 Surface를 Texture로 변환합니다.
    SDL_Texture* heroTexture = SDL_CreateTextureFromSurface(renderer, heroSurface);
    SDL_FreeSurface(heroSurface);

    // 3. 용사 위치 변수
    int heroX = (WINDOW_WIDTH / 2) - (HERO_WIDTH / 2);
    int heroY = (WINDOW_HEIGHT / 2) - (HERO_HEIGHT / 2);

    // 4. 게임 루프
    int running = 1;
    SDL_Event event;

    while (running) {
        // === [NEW] 이벤트 처리 (키보드 입력 감지) ===
        while (SDL_PollEvent(&event)) {
            // 1. 창 닫기 버튼(X) 처리
            if (event.type == SDL_QUIT) {
                running = 0;
            }
            // 2. 키보드 눌림(KeyDown) 감지
            else if (event.type == SDL_KEYDOWN) {
                // 어떤 키가 눌렸는지 확인 (Switch문 사용)
                switch (event.key.keysym.sym) {
                case SDLK_UP:    // 위쪽 화살표
                    heroY -= MOVE_SPEED;
                    break;
                case SDLK_DOWN:  // 아래쪽 화살표
                    heroY += MOVE_SPEED;
                    break;
                case SDLK_LEFT:  // 왼쪽 화살표
                    heroX -= MOVE_SPEED;
                    break;
                case SDLK_RIGHT: // 오른쪽 화살표
                    heroX += MOVE_SPEED;
                    break;
                }
            }
        }

        // [그리기 단계]
        // 1. 배경 지우기
        SDL_SetRenderDrawColor(renderer, 0, 180, 0, 255);
        SDL_RenderClear(renderer);


        // 2. 바뀐 위치(heroX, heroY)에 용사 그리기
        SDL_Rect destRect = { heroX, heroY, HERO_WIDTH, HERO_HEIGHT };
        SDL_RenderCopy(renderer, heroTexture, NULL, &destRect);

        // 3. 화면 송출
        SDL_RenderPresent(renderer);
    }

    // 뒷정리 (이전과 동일)
    SDL_DestroyTexture(heroTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
