#include<stdio.h>

int main()
{
    int i,age;
    for(i=0;i<10;i++)
    {
        printf("%d enter your age\n",i+1);
        scanf("%d",&age);
        if(age>10)
        {
            break;
        }
    }
    return 0;
}
