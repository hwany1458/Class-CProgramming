#include <stdio.h>

int main(void){
    int gold = 100;     // 일반 변수 (값)
    int *ptr = &gold;   // ① 포인터 변수 (주소)

    printf("=== [ 메모리 추적기 ] ===\n");
    printf("1. hp 변수의 값     : %d\n", hp);
    printf("2. hp 변수의 주소(&): %p\n", &hp);
    printf("3. ptr이 가진 값    : %p\n", ptr);
    
    printf("\n");
    printf("검증: &hp와 ptr은 똑같은가? %d\n", &hp == ptr);

    return 0;
}
