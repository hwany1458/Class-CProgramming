#include <stdio.h>
void main()
{
    int grade;
    printf("성적 점수를 입력하고 Enter>");
    scanf("%d", &grade);
    if (grade > 60)
    {
        printf("점수: %d\n", grade);
        printf("합격! 축하합니다.\n");
    }
    else
    {
        printf("시험 불합격!\n");
        printf("다시 시도해 보세요.\n");
    }
}
