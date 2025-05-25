#include<stdio.h>
#include<stdlib.h>

int *functiondangling()
{
    int a,b,sum;
    a=45;
    b=67;
    sum=a+b;
    return &sum;
}
int main()
{
    int *ptr=(int*)malloc(7* sizeof(int));
    ptr[0]=54;
    ptr[1]=78;
    ptr[2]=89;
    ptr[3]=34;
    ptr[4]=67;
    free(ptr);
    int *dangptr=functiondangling();
    int *danglingptr3;
    {
        int a=12;
        danglingptr3=&a;
    }
    return 0;
}
