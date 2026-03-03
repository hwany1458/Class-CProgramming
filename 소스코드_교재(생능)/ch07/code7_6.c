#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Sleep 때문에 추가

int main(void) {
    printf("이 메시지는 곧 사라집니다...\n");
    Sleep(2000); // 2초 대기
    
    system("cls"); // ①  화면을 싹 지움! (Clear Screen)
    
    printf("짜잔! 새로운 화면입니다.\n");
    
    return 0;
}