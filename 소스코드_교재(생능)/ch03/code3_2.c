#include <stdio.h>

int main(void) {
    int gold = 1000;
    int party = 3;

    // ❌ 틀린 방법: 정수끼리 나누면 소수점이 잘림
    printf("그냥 나누기 : %d \n", gold / party);

    // ⭕ 맞는 방법 1: 숫자 뒤에 .0을 붙여서 실수로 만들기 (숫자를 직접 쓸 때)
    printf("실수로 쓰기 : %f \n", 1000.0 / 3);

    // ⭕ 맞는 방법 2: 캐스팅(Casting) 마법 사용하기 (변수를 쓸 때)
    // gold를 잠시 double로 변신시켜서 나누면, 결과도 double이 됨!
    printf("제대로 나누기: %.2f \n", (double)gold / party);

    return 0;
}