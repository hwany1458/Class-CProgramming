#include <stdio.h>
#include <stdlib.h>

int main(void){
    // 1. [대여] 정수 1개 크기만큼 빌리기
    int* ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        return 1; // 대여 실패 시 종료
    }

    // 2. [사용] 값 저장하고 출력하기
    *ptr = 2024;
    printf("저장된 값: %d \n", *ptr);

    // 3. [반납] 다 썼으니 돌려주기 (매우 중요!)
    free(ptr); 
    
    printf("메모리 반납 완료!\n");

    // 4. [안전장치] 댕글링 포인터 방지 (아래 설명 참조)
    ptr = NULL; 

    return 0;
}