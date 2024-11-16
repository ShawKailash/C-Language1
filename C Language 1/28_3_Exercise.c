#include<stdio.h>
int fib_iterative(int n)
{
    int a=0;
    int b=1;
    for(int i=0;i<n-1;i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}
int fib_recursive(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}
int main()
{
    int number;
    printf("enter the number is\n");
    scanf("%d",&number);
    printf("the position number %d of the value is iterative fibonacci number %d\n",number,fib_iterative(number));
    printf("the position number %d of the value is recursive fibonacci number %d\n",number,fib_recursive(number));
    return 0;
}
