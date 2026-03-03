#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    // 1. 저장할 데이터 준비
    char name[] = "Arthur";
    int level = 50;
    int hp = 1000;

    // 2. 빨대 꽂기 (쓰기 모드 "w")
    // 주의: "w"는 기존 내용을 싹 지우고 새로 씁니다!
    FILE* fp = fopen("saved_game.txt", "w");

    if (fp == NULL) {
        printf("오류: 파일을 열 수 없습니다.\n");
        return 1;
    }

    printf("데이터를 저장하는 중입니다...\n");

    // 3. 파일에 기록하기 (fprintf)
    // 화면에 출력하듯이 자연스럽게 작성하세요.
    fprintf(fp, "용사명: %s\n", name);
    fprintf(fp, "레벨: %d\n", level);
    fprintf(fp, "체력: %d\n", hp);
    
    // 4. 빨대 뽑기 (저장 완료)
    // 이 순간, 하드디스크에 물리적으로 기록됩니다.
    fclose(fp); 

    printf("완료! saved_game.txt 파일을 확인해보세요.\n");

    return 0;
}