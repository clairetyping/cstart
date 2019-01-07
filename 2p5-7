#include<stdio.h>
int main(void)
{
    int x,y,z;
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2] = {{1,5},{5,3},{8,1}};
    int c[2][2];
    for(x = 0; x < 2; x++)
        for(y = 0; y < 2;y++)
        {   c[x][y] = 0;
            for(z = 0; z < 3; z++)
            c[x][y] = c[x][y] + a[x][z] * b[z][y];
        }
        for(x = 0; x < 2; x++)
        {    for(y = 0; y < 2; y++)
              printf("%3d",c[x][y]);
                putchar('\n');
            }

        return 0;

}

