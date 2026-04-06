#include <stdio.h>

int main(void) {
    // 나중에 이 숫자(5)를 100으로 바꿔도 아래 코드는 수정할 필요가 없습니다!
    int inven[5] = {10, 20, 30, 40, 50};

    // 1. 배열의 개수 자동 계산
    // sizeof(inven)은 20 (4byte * 5개)
    // sizeof(int)는 4
    // count = 20 / 4 = 5
    int count = sizeof(inven) / sizeof(inven[0]);

    printf("인벤토리 크기: %d칸\n", count);
    printf("--------------------\n");

    // 2. 계산된 count 변수 사용 (하드 코딩 탈출!)
    for (int i = 0; i < count; i++) {
        printf("%d번 칸 아이템: %d\n", i, inven[i]);
    }
    return 0;
}