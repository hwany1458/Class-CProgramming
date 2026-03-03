#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 문자열 복사를 위해 꼭 필요합니다!

// ① 설계도 (typedef 사용)
typedef struct {
    char name[20];
    int hp;
    int mp;
} Hero;

int main(void){
    // ② 실체화 (변수 선언)
    Hero h1;

    // ③ 멤버 접근 (값 대입)
    // "h1 상자 안에 있는 hp를 100으로 설정해라"
    h1.hp = 100;
    h1.mp = 50;
    
    // [주의] 문자열은 등호(=)로 넣을 수 없습니다!
    // h1.name = "Arthur"; (X) <-- 에러 발생
    strcpy(h1.name, "Arthur"); // (O) <-- strcpy(저장할곳, "내용") 사용

    // ④ 멤버 접근 (값 출력)
    printf("=== [ 히어로 상태 창 ] ===\n");
    printf("이 름 : %s \n", h1.name); // 점(.)을 찍어서 꺼내옴
    printf("체 력 : %d \n", h1.hp);
    printf("마 나 : %d \n", h1.mp);

    return 0;
}
