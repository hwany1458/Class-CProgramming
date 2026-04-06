#include <stdio.h>

int main(void){
    int arr[3] = { 10, 20, 30 };

    printf("1. arr[0]의 주소 : %p \n", &arr[0]);
    printf("2. 배열의 이름 arr : %p \n", arr);

    if (&arr[0] == arr) {
        printf("\n>>> [검증 완료] 둘은 완벽하게 같은 주소입니다!\n");
    }

    return 0;
}
