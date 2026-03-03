#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free가 들어있는 라이브러리

int main(void) {
    int size;
    int* inventory; // 배열 이름은 포인터라고 했죠? 주소를 담을 준비!

    printf("=== [ 맞춤형 가방 제작소 ] ===\n");
    printf("아이템을 몇 개나 담으실 건가요? : ");
    scanf("%d", &size);

    // 1. 동적 할당 (필요한 만큼만 메모리 대여)
    // "int 크기의 방을 size 개수만큼 만들어주세요."
    inventory = (int*)malloc(sizeof(int) * size);
    if (inventory == NULL) {
        printf("오류: 메모리가 부족해서 가방을 못 만들어요!\n");
        return 1;
    }

    // 2. 배열처럼 사용 (포인터는 배열과 친구!)
    printf("\n--- 아이템 %d개를 채워넣습니다 ---\n", size);
    for (int i = 0; i < size; i++) {
        inventory[i] = i + 1; // 1번 아이템, 2번 아이템...
        printf("[%d번 칸] 아이템 등록 완료\n", inventory[i]);
    }

    // 3. 메모리 해제 (아주 중요!)
    // 사용이 끝났으면 반드시 반납해야 합니다.
    free(inventory);
    printf("\n--- 가방을 반납하고 보증금을 돌려받았습니다 ---\n");
    return 0;
}