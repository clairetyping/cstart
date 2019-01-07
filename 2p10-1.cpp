#include<stdio.h>
//print out the day before and after a certain day
void yesterday(int *y, int *m, int *d)
{
    if(*d == 1)
    {if(*m == 1 )
    {
        *y = *y - 1;
        *m = 12;
        *d = 31;
    }
   else if(*m == 2 || *m == 4 || *m == 6 || *m == 9 || *m == 11)
    {
        *m =  *m - 1;
        *d = 31;
    }
   else if(*m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12)
    {
        *m = *m - 1;
        *d = 30;
    }
    else{
            *m = *m - 1;
            if(*y % 4 == 0 && *y % 100 != 0 || *y % 400 == 0)
            *d = 29;
            else
                *d = 28;
    }
    }
    else  *d = *d - 1;

}
void tomorrow(int *y, int *m, int *d)
{

    if(*d == 31)
    {
        if(*m == 12)
        {
            *y = *y + 1;
            *m = 1;
            *d = 1;
        }
        else if(*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12)
        {
            *m = *m + 1;
            *d = 1;
        }
    }
    else if(*d == 30)
    {
        if(*m == 4 || *m == 6 || *m == 9 || *m == 11)
            *m = *m +1;
            *d = 1;
    }
    else if(*m == 2)
    {

        if (((*y % 4 == 0 && *y % 100 != 0 || *y % 400 == 0) && *d==29) || *d==28)
        {

            *m = *m + 1; *d = 1;
        }
        else
            *d += 1;

    }
    else *d = *d + 1;
}
int main(void)
{
    int year,day,month;
    printf("请输入一个日期。\n");
    printf("年份：");
    scanf("%d",&year);
    printf("月份：");
    scanf("%d",&month);
    printf("日期：");
    scanf("%d",&day);
    yesterday(&year, &month, &day);
    printf("输入的日期的前一天是%d年%d月%d日。\n",year,month,day);
    tomorrow(&year,&month,&day);
    printf("输入的日期的后一天是%d年%d月%d日。\n",year,month,day);
    tomorrow(&year,&month,&day);
    printf("输入的日期的后一天是%d年%d月%d日。\n",year,month,day);
    return 0;
}
