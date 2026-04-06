#include <stdio.h>
int main(void) {
    printf("=== [ 폭탄 피하기 훈련 시작 ] ===\n");
    // 1번부터 10번까지 반복
    for (int i = 1; i <= 10; i++) {
        
        // [검문소] 만약 3의 배수라면? (나머지가 0이면)
        if (i % 3 == 0) {
            printf("[경고!] %d번은 폭탄입니다. 패스합니다!\n", i);
            
            // 중요! continue를 만나면 아래의 공격 코드를 실행하지 않고,
            // 즉시 증감식(i++)으로 점프하여 다음 회차로 넘어갑니다.
            continue; 
        }
        // continue에 걸리지 않은 숫자들만 이곳을 실행합니다.
        printf("%d번 허수아비 공격!\n", i);
    }
    printf("=== [ 훈련 종료 ] ===\n");
    return 0;
}