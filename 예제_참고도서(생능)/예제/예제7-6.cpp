#include <stdio.h>
void main()
{
    int button;
    printf("숫자(1-5)을 입력하고 Enter>");
    scanf("%d", &button);
    switch (button)
    {
    case 1: printf("밀크커피\n");
        break;
    case 2: printf("프림커피\n");
        break;
    case 3: printf("블랙커피\n");
        break;
    default: printf("코코아\n");
    }
}
