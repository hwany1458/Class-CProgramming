#include <stdio.h>

// (1) 목차(함수 원형) 선언 구역
// "Attack이라는 함수가 뒤에 나올 겁니다. 미리 알아두세요."
void Attack(void); 
void Heal(int amount);

int main(void){
    // (2) 이제 main이 맨 위에 있어도 안심하고 호출할 수 있습니다.
    printf("전투 시작!\n");
    Attack(); 
    Heal(30);
    return 0;
}

// [3] 실제 함수 정의(본문) 구역
void Attack(void){
    printf("공격합니다!\n");
}

void Heal(int amount){
    printf("%d만큼 회복합니다.\n", amount);
}