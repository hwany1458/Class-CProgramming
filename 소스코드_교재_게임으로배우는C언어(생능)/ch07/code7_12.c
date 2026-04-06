// 두 숫자를 더해서 결과를 '던져주는' 함수
int Plus(int a, int b) {
    int result = a + b;
    return result; // result 값을 나를 부른 곳으로 던진다!
}

int main(void) {
    // Plus 함수가 던진 값(30)을 sum 변수가 받습니다.
    int sum = Plus(10, 20); 
    printf("결과: %d", sum); // 결과: 30
    return 0;
}