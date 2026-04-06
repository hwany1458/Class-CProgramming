#include <stdio.h>

// ① 구조체 정의 (설계도 만들기)
// "Hero라는 박스에는 이름, 체력, 마나가 들어간다."
struct Hero {
    char name[20]; // 이름
    int hp;        // 체력
    int mp;        // 마나
}; // 세미콜론 필수!

int main(void){
    // ② 구조체 변수 선언 (실제 박스 만들기)
    // 문법: struct 구조체이름 변수명;
    struct Hero myHero; 

    // 이제 myHero라는 상자 안에는 name, hp, mp가 칸칸이 들어있습니다.
    
    return 0;
}