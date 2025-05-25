#include<stdio.h>

int main()
{
    int a=689978;
    int *ptr;
    *ptr=67;
    ptr=&a;
    printf("the value of a is %d\n",*ptr);
    return 0;
}
