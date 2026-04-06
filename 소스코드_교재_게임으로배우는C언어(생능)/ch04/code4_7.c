#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int choice;

    printf("=== [ 전설의 RPG 게임 ] ===\n");
    printf("1. 게임 시작\n");
    printf("2. 환경 설정\n");
    printf("3. 게임 종료\n");
    printf("메뉴를 선택하세요 : ");
    scanf("%d", &choice);

    switch (choice) 
    {
    case 1:
        printf("▶ 모험을 시작합니다! 로딩 중...\n");
        break; // 필수!
    case 2:
        printf("▶ 환경 설정 메뉴입니다. (소리/화면)\n");
        break; // 필수!
    case 3:
        printf("▶ 게임을 종료합니다. 안녕히 가세요.\n");
        break; // 필수!
    default:
        printf("▶ [경고] 잘못된 메뉴입니다. (1~3번을 고르세요)\n");
    }

    return 0;
}
