#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    // 1. 이름을 저장할 문자열 배열 (여유 있게 20칸)
    // 한글은 한 글자가 2~3칸을 차지하므로 넉넉해야 합니다.
    char name[20];

    printf("=== [ 캐릭터 생성 ] ===\n");
    printf("용사의 이름을 입력하세요: ");

    // 2. 문자열 입력 받기 (%s)
    // 주의: 배열 이름(name) 앞에는 '&'를 붙이지 않습니다!
    scanf("%s", name); 

    printf("\n");
    printf("반갑습니다, [%s] 용사님!\n", name);
    printf("이제 모험을 떠날 준비가 되었습니다.\n");

    return 0;
}