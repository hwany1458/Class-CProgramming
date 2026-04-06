#include <stdio.h>

int main(void) {
    // 5칸짜리 정수형 인벤토리 선언 (0번~4번 방)
    int inven[5]; 

    // 아이템 수량 저장
    inven[0] = 3;   // 0번 방: 체력 포션 3개
    inven[1] = 1;   // 1번 방: 마나 포션 1개
    inven[4] = 99;  // 4번 방: 레어 아이템 99개 (마지막 방)

    printf("=== [ 인벤토리 현황 ] ===\n");
    printf("1. 체력 포션: %d 개\n", inven[0]);
    printf("2. 마나 포션: %d 개\n", inven[1]);
    printf("5. 레어템: %d 개\n", inven[4]);
    printf("----------------------------\n");
    
    // 포션을 하나 사용했습니다.
    inven[0] = inven[0] - 1; 
    printf("체력 포션 사용 후: %d 개 남음\n", inven[0]);

    return 0;
}