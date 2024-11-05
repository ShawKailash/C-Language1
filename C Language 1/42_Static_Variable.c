#include<stdio.h>
int a=4;
int func(int b)
{
    static int abcd=5;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    printf("the value of abcd is %d\n",abcd);
    abcd++;
    return b+abcd;
}
int main()
{
    int b=30;
    int val=func(b);
    printf("the value of func is %d\n",val);
    val=func(b);
    val=func(b);
    val=func(b);
    return 0;
}
