#include<stdio.h>
//print a triangle tree
int main(void)
{
    int x,y,ln;
    printf("please type in the layer of a triangle：");
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
