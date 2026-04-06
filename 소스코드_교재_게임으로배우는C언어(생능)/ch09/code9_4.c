#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    char name[20];
    int hp;
    int maxHp;
    int level;
} Hero;

// 매개변수가 포인터(Hero*)입니다. 원본을 수정하겠다는 뜻이죠.
void LevelUp(Hero* h) 
{
    // 점(.) 대신 화살표(->)를 사용합니다.
    h->level++;          // 레벨 1 증가
    h->maxHp += 50;      // 최대 체력 50 증가
    h->hp = h->maxHp;    // 체력을 최대치로 회복
    
    printf("[Level Up] %s 히어로님이 %d레벨이 되었습니다!\n", h->name, h->level);
}

int main(void){
    // 구조체 변수 선언 및 초기화
    Hero myHero = { "Arthur", 100, 100, 1 };

    printf("현재 상태: 레벨 %d, 체력 %d/%d \n", myHero.level, myHero.hp, myHero.maxHp);

    // 함수 호출 시에는 주소(&)를 넘겨줍니다.
    LevelUp(&myHero); 

    printf("변경 확인: 레벨 %d, 체력 %d/%d \n", myHero.level, myHero.hp, myHero.maxHp);

    return 0;
}