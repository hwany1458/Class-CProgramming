#include <stdio.h>

// 1. 외부에서 값을 받아서(current_hp), 
// 2. 치료한 뒤 그 결과를 돌려주는(int) 함수
int Heal(int current_hp) {
    current_hp = current_hp + 10;
    return current_hp; // "치료 끝났어! 결과 가져가!"
}

int main(void) {
    int hp = 100;
    
    // 값을 보내고(hp), 결과(치료된 값)를 받아서 다시 저장(=)해야 합니다.
    hp = Heal(hp); 
    
    printf("현재 체력: %d\n", hp); // 110 출력
    return 0;
}