#include<stdio.h>
int main(void)
{
    int x,y,ln;
    printf("请输入三角形的层数：");
    scanf("%d",&ln);
    for(x = 1; x <= ln; x++)
    {
        for (y = 1; y <= ln - x; y++)
            printf("-");
        for (y = 1; y <= 2 * x - 1; y++)
            putchar('*');
        for (y = 1; y <= ln - x; y++)
            printf("-");
        putchar('\n');
    }
       return 0;

}