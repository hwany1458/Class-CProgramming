#include <stdio.h>
#include <windows.h> // ① 윈도우 기능(시간 제어 등)을 담은 상점

int main(void) {
    printf("3초 뒤에 폭발합니다!\n");
    
    printf("3...\n");
    Sleep(1000); // ② 1초 멈춤
    
    printf("2...\n");
    Sleep(1000); // 1초 멈춤
    
    printf("1...\n");
    Sleep(1000); // 1초 멈춤
    
    printf("쾅!!!\n");
    
    return 0;
}