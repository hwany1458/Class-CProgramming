#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    int level; // 빈 상자 준비

    printf("희망하는 시작 레벨을 입력하세요 : ");
  
    // 사용자 입력을 기다리는 코드
    // %d : 정수를 입력받겠다.
    // &level : 그 값을 level 상자의 '주소'로 배달해라!
    scanf("%d", &level); 

    printf("\n[설정 완료] 당신의 레벨은 %d입니다.\n", level);

    double height;
    printf("히어로의 키(cm)를 입력하세요 : ");
    
    // 실수 입력은 무조건 %lf
    scanf("%lf", &height); 
    printf("[설정 완료] 키는 %.1fcm 입니다.\n", height);

    return 0;
}