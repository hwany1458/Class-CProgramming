#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 1. 변수 선언 (초기 자금 1000골드)
    int myGold = 1000;
    int potionPrice = 150;
    int buyCount;
    int totalCost;

    printf("=== [ 잡화점 ] ===\n");
    printf("현재 소지금: %d 골드\n", myGold);
    printf("체력 물약(개당 %d골드)을 몇 개 사시겠습니까? : ", potionPrice);

    // 2. 구매 개수 입력 받기
    scanf("%d", &buyCount);

    // --- 여기가 핵심! 연산 시작 ---
    
    // 계산 1: 총 가격 = 물약 가격 * 개수
    totalCost = potionPrice * buyCount; 

    // 계산 2: 잔액 = 현재 돈 - 총 가격
    myGold = myGold - totalCost;

    // ---------------------------------

    printf("\n");
    printf("[ 영수증 발행 ]\n");
    printf("구매 수량: %d 개\n", buyCount);
    printf("결제 금액: %d 골드\n", totalCost);
    printf("남은 돈 : %d 골드\n", myGold);

    return 0;
}