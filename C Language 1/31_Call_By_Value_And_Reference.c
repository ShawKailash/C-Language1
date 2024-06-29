#include<stdio.h>
void changevalue(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a=4;
    int b=5;
    printf("this is call by value a is %d and b is %d\n",a,b);
    changevalue(&a,&b);
    printf("this is call by reference a is %d and b is %d",a,b);
    return 0;
}