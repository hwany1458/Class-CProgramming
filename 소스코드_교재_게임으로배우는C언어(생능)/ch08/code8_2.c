#include <stdio.h>

int main(void){
    int gold = 100;    // 원본 데이터 (보물 상자)
    int* ptr = &gold;  // 포인터 (보물 지도)

    printf("=== [ 원격 제어 시스템 가동 ] ===\n");
    printf("현재 금화 개수 (원본): %d\n", gold);

    // ① 지도를 보고 찾아가서 값 확인
    printf("지도(*ptr)로 확인한 개수: %d\n", *ptr);

    printf("\n>>> 해킹 시도: *ptr을 이용해 값을 999로 변경합니다.\n");
    
    // ② 지도를 보고 찾아가서 값 변경
    // gold = 999; 와 똑같은 효과!
    *ptr = 999; 

    printf("\n=== [ 결과 확인 ] ===\n");
    // 놀라운 결과! 나는 gold를 건드린 적이 없는데 값이 바뀌었다!
    printf("현재 금화 개수 (원본): %d (해킹 성공!)\n", gold);

    return 0;
}