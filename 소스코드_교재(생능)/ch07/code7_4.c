#include <stdio.h>
#include <stdlib.h> // ①　이 줄이 있어야 rand()를 쓸 수 있습니다.
#include <time.h>   // 매번 다른 숫자가 나오게 하려면 필요합니다.

int main(void) {
    // ②　[초기화] 주사위를 흔드는 시늉 (이게 없으면 매번 같은 패턴이 나옵니다)
    srand(time(NULL)); 
    printf("=== [ 랜덤 데미지 테스트 ] ===\n");
    
    // ③　0부터 9까지의 숫자 중 하나를 뽑습니다.
    int random_dmg = rand() % 10; 
    
    printf("몬스터에게 %d의 데미지를 입혔습니다!\n", random_dmg);
    return 0;
}