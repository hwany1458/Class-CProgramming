#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int hp;
    int atk;
} Monster;

int main(void){
    // ① 구조체 배열 선언과 동시에 초기화 (초기화 리스트)
    Monster mob[3] = {
        {"Slime", 10, 2},   // mob[0] 데이터
        {"Orc", 50, 10},    // mob[1] 데이터
        {"Dragon", 1000, 500} // mob[2] 데이터
    };

    printf("=== [ 몬스터 도감 ] ===\n");

    // ② 반복문으로 군단 전체 조회
    for (int i = 0; i < 3; i++) 
    {
        // 접근 순서: 배열 인덱스([i])를 먼저 쓰고, 점(.)을 찍습니다.
        printf("%d번: %s (HP:%d, ATK:%d)\n", 
            i + 1, 
            mob[i].name, 
            mob[i].hp, 
            mob[i].atk
        );
    }

    return 0;
}
