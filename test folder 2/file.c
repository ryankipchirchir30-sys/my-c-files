#include<stdio.h>
int main()
{
int rows = 4;
int number = 1;
int j,i,space;
for (int i = 1;i <= rows;i++)
{
    for(space =1;space <=rows-1;space++)
    {
        printf("  ");
    }

    for(int j = 1;j <= rows-1;j++)
    {
        printf("  ");
    }
    for (j = 1;j <=i;j++)
    {
        printf(" %d ",number++);
    }
    printf("\n");
}

    return 0;
}