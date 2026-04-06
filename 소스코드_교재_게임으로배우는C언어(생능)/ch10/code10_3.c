#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    // 데이터를 담을 빈 그릇(변수) 준비
    char name[20];
    int level;
    int hp;

    // 1. 빨대 꽂기 (읽기 모드 "r")
    // "r" (Read): 파일이 없으면 에러(NULL)가 납니다.
    FILE* fp = fopen("saved_game.txt", "r");

    if (fp == NULL) {
        printf("[오류] 세이브 파일이 없습니다. 처음부터 시작하세요.\n");
        return 1;
    }

    printf("파일 발견! 데이터를 불러옵니다...\n");

    // 2. 파일에서 읽어오기 (fscanf)
    // 텍스트 파일 내용 예시: Arthur 50 1000
    // 띄어쓰기(공백)를 기준으로 하나씩 쏙쏙 뽑아옵니다.
    fscanf(fp, "%s %d %d", name, &level, &hp);

    // 3. 빨대 뽑기
    fclose(fp);

    // 4. 결과 확인 (화면에 출력)
    printf("\n=== [ 로드 완료 ] ===\n");
    printf("히어로 이름: %s\n", name);
    printf("현재 레벨: %d\n", level);
    printf("현재 체력: %d\n", hp);
    printf("=====================\n");

    return 0;
}