#include <stdio.h>
int main(void)
{
 printf("컴파일된 파일: %s\n", __FILE__);
 printf("컴파일된 날짜: %s\n", __DATE__);
 printf("컴파일된 시간: %s\n", __TIME__);
 printf("현재의 line : %d\n", __LINE__);
 return 0;
}
