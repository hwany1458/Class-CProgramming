#include <stdio.h>
int main(void) {
    int hp = 100;
    
    printf("현재 체력: %d\n", hp); // 100 출력

    // 몬스터에게 10의 데미지를 입었다!
    hp = hp - 10; 
    printf("공격 당함! 현재 체력: %d\n", hp); // 90 출력

    return 0;
}