#include <SDL.h>
#include <stdio.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

// [NEW] 용사 크기 정의 (이미지 크기에 맞춰주세요)
// 변경: 가로(Width)와 세로(Height)를 따로 정의
#define HERO_WIDTH  63
#define HERO_HEIGHT 87

int main(int argc, char* argv[]) {

    // 1. 초기화 및 윈도우, 렌더러 생성 (이전과 동일)
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL Init Fail: %s\n", SDL_GetError()); return 1;
    }
    SDL_Window* window = SDL_CreateWindow("Hero RPG", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);

    if (!window) { printf("Window Create Fail: %s\n", SDL_GetError()); return 1; }
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    // === [NEW] 2. 이미지 로드 단계 (중요!) ===

    // (1) 하드디스크에 있는 bmp 파일을 RAM(시스템 메모리)으로 불러옵니다.
    // Surface는 '종이에 그린 그림'이라고 생각하면 됩니다.
    // 1. 이미지를 Surface로 불러옵니다.
    SDL_Surface* heroSurface = SDL_LoadBMP("hero.bmp");
    if (heroSurface == NULL) {
            printf("이미지 로드 실패! (hero.bmp 파일이 있는지 확인하세요)\n에러: %s\n", SDL_GetError());
            // 윈도우와 렌더러를 정리하고 종료해야 합니다.
            SDL_DestroyRenderer(renderer);
            SDL_DestroyWindow(window);
            SDL_Quit();
            return 1;
    }

    // 2. 투명하게 만들 색상을 지정합니다. 
    Uint32 colorkey = SDL_MapRGB(heroSurface->format, 0, 255, 0);

    // 그 다음 SDL_SetColorKey 함수는 그대로 두시면 됩니다.
    SDL_SetColorKey(heroSurface, SDL_TRUE, colorkey);

    // 4. 투명화 설정이 된 Surface를 Texture로 변환합니다.
    SDL_Texture* heroTexture = SDL_CreateTextureFromSurface(renderer, heroSurface);

    // 5. Surface는 이제 필요 없으니 메모리 해제
    SDL_FreeSurface(heroSurface);

    if (heroTexture == NULL) {
        printf("텍스처 생성 실패! 에러: %s\n", SDL_GetError());
        // ... 정리 및 종료 코드 생략 ...
        return 1;
    }

    // [NEW] 용사의 초기 위치 변수 (화면 중앙)
    // 정중앙 좌표에서 이미지 크기의 절반만큼 빼야 중앙에 위치합니다.
    int heroX = (WINDOW_WIDTH / 2) - (HERO_WIDTH / 2);
    int heroY = (WINDOW_HEIGHT / 2) - (HERO_HEIGHT / 2);

    // 3. 게임 루프
    int running = 1;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = 0;
        }
        // [그리기 단계]
        // 1. 배경 지우기 (초록색)
        SDL_SetRenderDrawColor(renderer, 0, 180, 0, 255);
        SDL_RenderClear(renderer);
        // === [NEW] 2. 용사 그리기 ===

        // 그릴 위치와 크기를 지정하는 사각형(Rect) 구조체 준비
        SDL_Rect destRect;
        destRect.x = heroX;      // 그릴 위치 x
        destRect.y = heroY;      // 그릴 위치 y
        destRect.w = HERO_WIDTH;  // 가로 크기
        destRect.h = HERO_HEIGHT;  // 세로 크기
        // 렌더러에게 "이 텍스처(도장)를 저 위치(destRect)에 찍어라!" 하고 명령
        // 두 번째 NULL은 이미지 전체를 의미합니다.
        SDL_RenderCopy(renderer, heroTexture, NULL, &destRect);
        // 3. 화면 송출
        SDL_RenderPresent(renderer);
    }

    // 4. 뒷정리
    // [NEW] 다 쓴 도장(텍스처)도 반납해야 합니다.
    SDL_DestroyTexture(heroTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}