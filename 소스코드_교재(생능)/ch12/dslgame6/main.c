#include <stdio.h> 
#include <SDL.h> 

// 화면 크기
#define WIDTH 800
#define HEIGHT 600

// 전역 변수
SDL_Window* window;
SDL_Renderer* renderer;

struct Spaceship {
        SDL_Rect rect;
        int dx, dy;
        int health;
        SDL_Texture* texture;
} spaceship = { {WIDTH / 2, HEIGHT - 60, 100, 100}, 0, 0, 0 , NULL };

struct Alien {
        SDL_Rect rect;
        int dx, dy;
        int health;
        int show;
        SDL_Texture* texture;
} aliens[10]; // 외계인 우주선 배열

struct Missile {
        SDL_Rect rect;
        int dx, dy;
        int show;
        SDL_Texture* texture;
} missile = { {WIDTH / 2, HEIGHT - 60, 60, 60}, 1, 10, 0 , NULL };

int checkCollision(SDL_Rect rect1, SDL_Rect rect2) {
        // 두 개의 바운딩 박스가 서로 겹치는지 확인
        if (rect1.x + rect1.w >= rect2.x &&
                rect2.x + rect2.w >= rect1.x &&
                rect1.y + rect1.h >= rect2.y &&
                rect2.y + rect2.h >= rect1.y) {
                // 충돌 발생
                return 1;
        }
        // 충돌하지 않음
        return 0;
}

int main(int argc, char** argv)
{
        SDL_Event event;
        int quit = 0;
        SDL_Init(SDL_INIT_VIDEO);

        // 원칙적으로 반환된 값이 NULL인지를 검사하여야 합니다. 이 코드에서는 생략하였습니다.
        window = SDL_CreateWindow("galaga", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
        renderer = SDL_CreateRenderer(window, -1, 0);

        SDL_Surface* bmp = SDL_LoadBMP("spaceship.bmp");
        spaceship.texture = SDL_CreateTextureFromSurface(renderer, bmp);
        SDL_FreeSurface(bmp);

        bmp = SDL_LoadBMP("alien.bmp");
        for (int i = 0; i < 10; i++) { // 외계인 우주선 배열 초기화
                aliens[i].texture = SDL_CreateTextureFromSurface(renderer, bmp);
        }
        SDL_FreeSurface(bmp);

        bmp = SDL_LoadBMP("missile.bmp");
        missile.texture = SDL_CreateTextureFromSurface(renderer, bmp);
        SDL_FreeSurface(bmp);

        // 외계인 우주선 위치 초기화
        int alienX = 50;
        int alienY = 50;
        for (int i = 0; i < 10; i++) {
                aliens[i].rect.w = aliens[i].rect.h = 100;
                aliens[i].dx = aliens[i].dy = 1;
                aliens[i].show = 1;
                aliens[i].rect.x = alienX;
                aliens[i].rect.y = alienY;
                alienX += 100;
                if (alienX >= WIDTH - 100) {
                        alienX = 50;
                        alienY += 100;
                }
        }

        while (!quit) {
                // 이벤트 처리
                while (SDL_PollEvent(&event)) {
                        if (event.type == SDL_QUIT) {
                                quit = 1;
                        }
                        else if (event.type == SDL_KEYDOWN) {
                                if (event.key.keysym.sym == SDLK_RIGHT)
                                        spaceship.rect.x += 10;
                                if (event.key.keysym.sym == SDLK_LEFT)
                                        spaceship.rect.x -= 10;
                                if (event.key.keysym.sym == SDLK_SPACE) {
                                        missile.show = 1;
                                        missile.rect.x = spaceship.rect.x;
                                        missile.rect.y = spaceship.rect.y;
                                }
                        }
                }
                for (int i = 0; i < 10; i++) {
                        if (aliens[i].show == 0) continue;
                        aliens[i].rect.x += aliens[i].dx;
                        if (aliens[i].rect.x <= 0 || aliens[i].rect.x > WIDTH) {
                                aliens[i].dx *= -1;
                                aliens[i].rect.y += 10;
                        }
                        if (missile.show == 0) continue;
                        int collision = checkCollision(aliens[i].rect, missile.rect);
                        if (collision) {
                                missile.show = 0;
                                aliens[i].show = 0;
                                missile.rect.y = spaceship.rect.y;
                        }
                }
                if (missile.show == 1) {
                        missile.rect.y -= missile.dy;
                        if (missile.rect.y < 0)
                                missile.show = 0;
                }

                // 화면 지우기
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderClear(renderer);
                SDL_RenderCopy(renderer, spaceship.texture, NULL, &(spaceship.rect));

                // 외계인 우주선 그리기
                for (int i = 0; i < 10; i++) {
                        if (aliens[i].show == 1)
                                SDL_RenderCopy(renderer, aliens[i].texture, NULL, &(aliens[i].rect));
                }

                if (missile.show == 1) {
                        SDL_RenderCopy(renderer, missile.texture, NULL, &(missile.rect));
                }

                SDL_Delay(10);
                SDL_RenderPresent(renderer);
        }
        SDL_DestroyRenderer(renderer); // 렌더러 파괴
        SDL_DestroyWindow(window); // 윈도우 파괴
        SDL_Quit(); // SDL 종료
        return 0;
}
