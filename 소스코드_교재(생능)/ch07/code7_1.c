#include <stdio.h>

// [1] 함수 정의 (주문서 만들기)
// void: "결과물(반환값)은 없습니다. 그냥 실행하고 끝내세요."
void Attack(void){
    printf("[공격] 히어로가 칼을 휘두릅니다!\n");
    printf("   -> 몬스터에게 10의 데미지!\n");
}

void Heal(void){
    printf("[치료] 포션을 마십니다.\n");
    printf("   -> 체력이 20 회복되었습니다.\n");
}

int main(void){
    printf("=== [ 전투 시작 ] ===\n");

    // [2] 함수 호출 (주문 외우기)
    Attack(); // 공격 함수 실행!
    Attack(); // 한 번 더 공격!
    
    printf("\n(몬스터의 반격으로 다쳤습니다!)\n\n");
    
    Heal();   // 치료 함수 실행!

    printf("=== [ 전투 종료 ] ===\n");
    return 0;
}
