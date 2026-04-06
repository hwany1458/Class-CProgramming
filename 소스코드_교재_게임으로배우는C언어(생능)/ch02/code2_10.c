#define _CRT_SECURE_NO_WARNINGS // Visual Studio 필수
#include <stdio.h>

int main(void){
    int level;
    double height;
    char rank;

    printf("=== [ 캐릭터 생성 시스템 ] ===\n");

    // 1. 정수 입력
    printf("1. 희망 레벨을 입력하세요: ");
    scanf("%d", &level); // & 필수!

    // 2. 실수 입력
    printf("2. 키를 입력하세요: ");
    scanf("%lf", &height); // %lf 필수!

    // 3. 문자 입력 (버퍼 비우기 테크닉)
    printf("3. 등급을 입력하세요: ");
    scanf(" %c", &rank); // %c 앞에 공백 필수!

    // 4. 결과 출력
    printf("\n");
    printf("==============================\n");
    printf(" [ 캐릭터 생성 완료 ]\n");
    printf("==============================\n");
    printf(" 레  벨 : %d\n", level);
    printf(" 키     : %.1f\n", height);
    printf(" 등급   : %c\n", rank);
    printf("==============================\n");

    return 0;
}