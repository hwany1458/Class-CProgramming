#include <stdio.h>
#include <stdlib.h>

struct worldcup
{
    const char* nation;
    //또는 char nation[9];
    char goal;
};

int main(void)
{
    struct worldcup data[4] = { {"스웨덴",5},{"멕시코",3},
                                  {"대한민국",3},{"독일",2} };
    int  i;
    FILE* fp;
    fp = fopen("2018cup.txt", "w");
    if (fp == NULL)
    {
        printf("File open에 오류 발생");
        exit(1);
    }
    for (i = 0; i <= 3; i++)
    {
        printf("%s %d\n", data[i].nation, data[i].goal);
        fprintf(fp, "%s %d\n", data[i].nation, data[i].goal);
    }
    fclose(fp);
    return 0;
}

