#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수 사용을 위해 필수!

// 1. 구조체 정의 (용병의 설계도)
typedef struct {
    char name[20];
    int atk;
} Mercenary;

int main(void){
    int count;
    Mercenary* guild; // 동적 할당된 메모리 주소를 저장할 포인터

    printf("=== [ 용병 길드 관리 시스템 ] ===\n");
    
    // 2. 사용자에게 필요한 인원 수 입력받기
    printf("용병을 몇 명 고용하시겠습니까? : ");
    scanf("%d", &count);

    // 3. 동적 메모리 할당 (입력받은 수만큼만 공간 빌리기)
    // Mercenary 구조체 크기 * 인원수만큼 힙 영역에서 할당
    guild = (Mercenary*)malloc(sizeof(Mercenary) * count);

    // (안전 장치) 메모리 할당 실패 시 예외 처리
    if (guild == NULL) {
        printf("오류: 메모리가 부족하여 고용할 수 없습니다.\n");
        return 1;
    }

    printf("\n--- 용병 계약서 작성 ---\n");

    // 4. 반복문으로 정보 입력받기
    // 동적 할당된 메모리는 배열처럼 대괄호[]로 접근 가능합니다.
    for (int i = 0; i < count; i++) {
        printf("[%d번째 용병] 이름 입력: ", i + 1);
        scanf("%s", guild[i].name); // 문자열은 & 생략

        printf("[%d번째 용병] 공격력 입력: ", i + 1);
        scanf("%d", &guild[i].atk);
    }

    printf("\n=== [ 고용된 용병 명단 ] ===\n");

    // 5. 명단 출력
    for (int i = 0; i < count; i++) {
        printf("%d. 이름: %s (공격력: %d)\n", 
            i + 1, guild[i].name, guild[i].atk);
    }

    printf("============================\n");

    // 6. 메모리 해제 (매우 중요!)
    // 다 쓴 명부는 반드시 반납(해제)해야 합니다.
    free(guild);
    printf("메모리 반납 완료. 프로그램을 종료합니다.\n");

    return 0;
}