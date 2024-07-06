#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    printf("the sum of 1 and 2 is %d\n",sum(1,2));
    int (*fptr)(int, int);
    fptr = &sum;
    int d = (*fptr)(4,6);
    printf("the value of d is %d\n",d);
    return 0;
}