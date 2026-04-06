#include <stdio.h>

// ② 매개변수가 포인터(int*)입니다. 주소를 달라는 뜻이죠.
void RealHeal(int* ptr) 
{
    printf("  [치료실] 전달받은 주소: %p \n", ptr);
    printf("  [치료실] 찾아가 보니 체력이 %d이군요. 치료합니다.\n", *ptr);
    
    // ③ 역참조(*)를 이용해 원본 데이터를 수정합니다.
    *ptr = *ptr + 50; 
    
    printf("  [치료실] 치료 완료! (현재 값: %d)\n", *ptr);
}

int main(void){
    int myHp = 10;

    printf("=== [ 전투 중 부상 ] ===\n");
    printf("현재 내 체력: %d \n\n", myHp);

    // ① 주의: 그냥 myHp(값)가 아니라 &myHp(주소)를 보냅니다.
    RealHeal(&myHp); 

    printf("\n=== [ 전투 복귀 ] ===\n");
    printf("현재 내 체력: %d (우와! 진짜로 회복됐다!)\n", myHp);

    return 0;
}