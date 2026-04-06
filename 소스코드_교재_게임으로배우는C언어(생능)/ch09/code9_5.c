#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 랜덤(rand) 사용을 위해 필요
#include <time.h>   // 랜덤 시드(time) 설정을 위해 필요

// ① [구조체] 히어로 설계도
typedef struct {
    char name[20];
    int hp;
    int maxHp;
    int atk;
    int exp;
    int level;
} Hero;

// ② [함수] 상태창 출력
void ShowInfo(Hero* h){
    printf("\n==================================\n");
    printf("  [ %s 히어로님의 상태 ]\n", h->name); // 화살표(->) 사용!
    printf("  Lv   : %d\n", h->level);
    printf("  HP   : %d / %d\n", h->hp, h->maxHp);
    printf("  ATK  : %d\n", h->atk);
    printf("  EXP  : %d / 100\n", h->exp);
    printf("==================================\n");
}

// ③ [함수] 사냥 (경험치 획득 및 레벨업 로직)
void Attack(Hero* h){
    printf("\n사냥터에 입장했습니다...\n");
    
    // 체력이 없으면 사냥 불가
    if (h->hp <= 0) {
        printf("체력이 부족합니다! 먼저 휴식을 취하세요.\n");
        return;
    }

    // 데미지 입음 (랜덤 1~10)
    int damage = rand() % 10 + 1;
    h->hp -= damage;
    if (h->hp < 0) h->hp = 0;

    // 경험치 획득 (랜덤 10~30)
    int gainExp = rand() % 21 + 10;
    h->exp += gainExp;

    printf("몬스터와 전투! 체력이 %d 감소했습니다.\n", damage);
    printf("경험치를 %d 획득했습니다.\n", gainExp);

    // [레벨업 체크] 경험치가 100 이상이면?
    if (h->exp >= 100) {
        h->level++;          // 레벨 증가
        h->exp = 0;          // 경험치 초기화
        h->maxHp += 50;      // 최대 체력 증가
        h->hp = h->maxHp;    // 체력 완전 회복
        h->atk += 5;         // 공격력 증가
        printf("\n[Level Up!] 축하합니다! %d레벨이 되었습니다!\n", h->level);
    }
}

// ④ [함수] 휴식 (체력 회복)
void Rest(Hero* h){
    printf("\n나무 그늘 아래서 잠시 쉽니다...\n");
    h->hp = h->maxHp; // 체력을 최대치로 회복
    printf("체력이 모두 회복되었습니다!\n");
}

int main(void){
    // 랜덤 초기화 (매번 다른 게임을 위해)
    srand(time(NULL));

    // 히어로 생성 및 초기화
    Hero user;
    user.level = 1;
    user.hp = 100;
    user.maxHp = 100;
    user.atk = 10;
    user.exp = 0;

    printf("히어로의 이름을 입력하세요: ");
    scanf("%s", user.name); // 문자열은 & 안 붙임!

    int choice;

    // ⑤ [메인 루프] 게임이 계속 돌아가는 심장
    while (1) {
        printf("\n[ 대기실 ] 무엇을 하시겠습니까?\n");
        printf("1. 사냥터 가기  2. 포션 마시기(휴식)  3. 상태창 확인  4. 종료\n");
        printf("입력 >> ");
        scanf("%d", &choice);

        if (choice == 1) {
            Attack(&user); // 주소(&)를 넘겨야 원본이 바뀜!
        }
        else if (choice == 2) {
            Rest(&user);   // 주소(&) 넘기기
        }
        else if (choice == 3) {
            ShowInfo(&user); // 주소(&) 넘기기
        }
        else if (choice == 4) {
            printf("\n게임을 종료합니다. 모험을 마칩니다!\n");
            break; // 무한 루프 탈출
        }
        else {
            printf("\n잘못된 입력입니다. 다시 선택해주세요.\n");
        }
    }

    return 0;
}
