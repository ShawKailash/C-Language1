#include<stdio.h>

int main()
{
    int marks[2][4]={{34,56,78,68},{43,54,76,98}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
