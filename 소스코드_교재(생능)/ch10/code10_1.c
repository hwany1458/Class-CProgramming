#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    // ① 파일 포인터 준비
    FILE* fp = NULL; 

    // ② 파일 열기
    // "data.txt"라는 파일에 빨대를 꽂을 거야. 
    // "w" (Write) 모드: 쓰기 전용
    fp = fopen("data.txt", "w");

    // ③ 연결 확인 (중요!)
    // 만약 파일이 없거나(읽기 모드일 때), 디스크가 꽉 차서 빨대가 안 꽂혔다면?
    if (fp == NULL) {
        printf("오류: 파일 열기 실패\n");
        return 1; // 프로그램 강제 종료
    }

    printf("성공: 파일과 연결되었습니다!\n");

    // ④ (데이터를 쓰고 읽는 과정은 다음 단계에서...)

    // ⑤ 파일 닫기
    // 다 썼으면 반드시 닫아야 메모리 누수가 생기지 않습니다.
    fclose(fp); 
    printf("성공: 파일 연결을 해제했습니다.\n");

    return 0;
}
