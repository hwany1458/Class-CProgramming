#include <stdio.h>

int main(void) {

    // 1. 변수 선언 및 초기화
    int level = 1;
    double height = 175.5;
    char rank = 'B';

    // 2. 상태 창 꾸미기 (UI 구현)
    printf("========= [ STATE ] =========\n");
    
    // "레벨은 (   ) 입니다" 라고 말하고, 빈칸에 level 변수를 넣는다.
    printf(" 레  벨 : %d \n", level);
    
    // "키는 (   ) 입니다" 라고 말하고, 빈칸에 height 변수를 넣는다.
    printf(" 키    : %.1f \n", height); // .1f는 소수점 1자리까지만 보여달라는 뜻!
    
    // "등급은 (   ) 입니다" 라고 말하고, 빈칸에 rank 변수를 넣는다.
    printf(" 등  급 : %c \n", rank);
    
    printf("=============================\n");
    return 0;
}