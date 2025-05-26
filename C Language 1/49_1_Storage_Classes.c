#include<stdio.h>
int myfunc(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int myfunc1(int c, int d)
{
    static int myvar;
    myvar++;
    printf("the myvar is %d\n",myvar);
    return myvar;
}
int main()
{
    int sum;
    sum=myfunc(3,5);
    printf("the sum is %d\n",sum);
    int myvar=myfunc1(3,5);
    myvar=myfunc1(3,5);
    myvar=myfunc1(3,5);
    myvar=myfunc1(3,5);
    myvar=myfunc1(3,5);
    return 0;
}
