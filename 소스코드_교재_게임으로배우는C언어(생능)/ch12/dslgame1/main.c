#include <SDL.h> // SDL 라이브러리를 가져옵니다.
#include <stdio.h>

// 윈도우 크기 정의 (가로 800, 세로 600)
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

int main(int argc, char* argv[]) {

    // 1. SDL 초기화 (비디오 기능 켜기)
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL 초기화 실패! 에러: %s\n", SDL_GetError());
        return 1;
    }

    // 2. 윈도우(창) 만들기
    // 제목: "전설의 시작", 위치: 화면 중앙, 크기: 800x600
    SDL_Window* window = SDL_CreateWindow(
        "Hero RPG",   // 창 제목
        SDL_WINDOWPOS_CENTERED,     // 창 위치 x (중앙)
        SDL_WINDOWPOS_CENTERED,     // 창 위치 y (중앙)
        WINDOW_WIDTH,               // 가로 크기
        WINDOW_HEIGHT,              // 세로 크기
        0                           // 옵션 (기본)
    );

    if (window == NULL) {
        printf("윈도우 생성 실패! 에러: %s\n", SDL_GetError());
        return 1;
    }

    // 3. 렌더러(화가) 고용하기
    // 윈도우 안에 그림을 그려줄 도구를 생성합니다.
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // 4. 게임 루프 (Game Loop) - 여기가 게임의 심장입니다!
    // running이 1(참)인 동안 게임은 계속 실행됩니다.
    int running = 1;
    SDL_Event event; // 키보드, 마우스 등의 이벤트를 담을 그릇

    while (running) {
        // [이벤트 처리] 사용자가 X 버튼을 눌렀는지 확인
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) { // 창 닫기 버튼(X)을 누르면
                running = 0;              // 루프를 종료한다.
            }
        }
        // [그리기 단계]
        // 1. 붓 색깔 고르기 (초록색: R=0, G=180, B=0) -> 풀밭 색
        SDL_SetRenderDrawColor(renderer, 0, 180, 0, 255);

        // 2. 화면 전체를 싹 칠하기 (배경 지우기)
        SDL_RenderClear(renderer);
        // 3. 그린 내용을 실제 화면에 띄우기 (송출)
        SDL_RenderPresent(renderer);
    }

    // 5. 뒷정리 (메모리 해제)
    // 만든 순서의 역순으로 정리합니다.
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit(); // SDL 종료

    return 0;
}
