#include <stdio.h>

int main(void){
    int inventory[3] = { 100, 200, 300 }; // 아이템 3개
    int* ptr = inventory; // 포인터에 배열의 시작 주소 대입 (ptr = &inventory[0]과 같음)

    printf("=== [ 해커 모드: 포인터로 배열 해킹 ] ===\n");

    // 방법 1: 배열 인덱스 사용 (일반 모드)
    printf("inventory[0] = %d\n", inventory[0]);

    // 방법 2: 포인터 연산 사용 (해커 모드)
    printf("*(ptr + 0)   = %d\n", *(ptr + 0)); // ① ptr에서 0칸 이동 후 열기
    printf("*(ptr + 1)   = %d\n", *(ptr + 1)); // ② ptr에서 1칸 이동 후 열기
    printf("*(ptr + 2)   = %d\n", *(ptr + 2)); // ptr에서 2칸 이동 후 열기

    return 0;
}