#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int baseDamage = 100; // 기본 공격력
    int attackCount;      // 몇 번째 공격인가?
    int isCritical;       // 크리티컬 여부 (나머지 값 저장)

    printf("=== [ 전투 시뮬레이터 ] ===\n");
    printf("몇 번째 공격입니까? (숫자 입력): ");
    scanf("%d", &attackCount);

    // 핵심 로직: 공격 횟수를 3으로 나눈 나머지를 구함
    // 1번째 -> 1, 2번째 -> 2, 3번째 -> 0, 4번째 -> 1 ...
    isCritical = attackCount % 3; 
    printf("\n");
    printf("--- [ 분석 결과 ] ---\n");
    printf("나머지 값(Cycle) : %d \n", isCritical);
    
    // (아직 if문을 안 배웠으니 계산식으로 결과를 보여줍시다)
    // 나머지가 0일 때만 보너스를 주고 싶지만, 
    // 지금은 '패턴'을 눈으로 확인하는 것이 목표입니다.
    
    printf("기본 데미지 : %d \n", baseDamage);
    // 팁: 3번째 공격(나머지 0)일 때 뭔가 특별한 일이 일어날 것 같죠?
    
    return 0;
}