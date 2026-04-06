#include <stdio.h>

// [1] 함수 정의 (주문서 만들기)
// void: "결과물(반환값)은 없습니다. 그냥 실행하고 끝내세요."
void Attack(void){
    printf("[공격] 히어로가 칼을 휘두릅니다!\n");
    printf("   -> 몬스터에게 10의 데미지!\n");
}

// 괄호 안의 'int amount'가 외부에서 받을 값입니다.
void Heal(int amount) {
    printf("[치료] 신비한 물약을 마십니다.\n");
    // 전달받은 amount만큼 회복합니다.
    printf("   -> 체력이 %d 만큼 회복되었습니다!\n", amount);
}

int main(void) {
    Heal(20); // 20을 전달 -> amount는 20이 됨
    Heal(50); // 50을 전달 -> amount는 50이 됨
    return 0;
}
