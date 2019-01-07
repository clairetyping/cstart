/*use a two-dimensional array to count 5 students record in three courses.
*/
#include<stdio.h>
int max_of(int vc[5][3],int no)
{
    int x;
    int max = vc[0][0];
    for(x = 0; x < 5; x++)
    {
        if(vc[x][no] > max)
            max = vc[x][no];
        return max;
    }
}
int aver(int vb[5][3], int no)
{

    int y;
    int sum = 0;
    int average;
    for(y = 0; y < 3; y++)
        sum += vb[no][y];
        average = sum / 3;
        return average;

}
int main(void)
{
    int i,j;
    int maxchi,maxmat,maxeng;
    int a[5][3];
    printf("让我们来录入一下学生的成绩。\n");
    for(i = 0; i < 5; i++)
    {
        printf("[%d]号语文：",i+1);
        scanf("%d",&a[i][0]);
        printf("    数学：");
        scanf("%d",&a[i][1]);
        printf("    英语：");
        scanf("%d",&a[i][2]);
    }

    maxchi = max_of(a,0);
    maxmat = max_of(a,1);
    maxeng = max_of(a,2);
    printf("语文最高分 = %d\n",maxchi);
    printf("数学最高分 = %d\n",maxmat);
    printf("英语最高分 = %d\n",maxeng);
    for(j = 0; j < 5; j++)
        printf("%d号学生的平均分是%d\n",j+1,aver(a,j));

    return 0;
}
