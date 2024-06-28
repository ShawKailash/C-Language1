#include<stdio.h>

int main()
{
    int a=56;
    int *ptr=&a;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*ptr);
    printf("the address of a is %u\n",ptr);
    printf("the address of a is %u\n",&a);
    printf("the address of ptr is %u\n",&ptr);
    printf("the value of ptr is %u\n",*(&ptr));
    return 0;
}