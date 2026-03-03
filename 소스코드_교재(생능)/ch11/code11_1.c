#include <stdio.h>
#include <stdlib.h> // 필수! malloc이 들어있는 라이브러리

int main(void){
    // 1. 땅 빌리기 (신청)
    // "int 크기(4바이트)만큼 빌려서, 그 주소를 ptr에 저장해라"
    int* ptr = (int*)malloc(sizeof(int));

    // 2. 안전 점검 (매우 중요!)
    // 만약 남은 메모리가 없어서 땅을 못 빌렸다면? malloc은 NULL을 줍니다.
    if (ptr == NULL) {
        printf("알림: 메모리가 부족하여 땅을 빌릴 수 없습니다.\n");
        return 1; // 프로그램 종료
    }

    // 3. 사용하기 (입주)
    // 포인터가 가리키는 곳(*ptr)에 가서 100을 넣는다.
    *ptr = 100; 

    printf("빌린 땅의 주소: %p \n", ptr);
    printf("그 안에 든 값 : %d \n", *ptr);

    // (다 쓴 뒤에는 반드시 반납해야 합니다)
    free(ptr);    
    return 0;
}