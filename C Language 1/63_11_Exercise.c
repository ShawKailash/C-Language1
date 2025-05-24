#include<stdio.h>
int palindrome(int num)
{
    int reversed=0;
    int orignalnumber=num;
    while(num!=0)
    {
        reversed=reversed * 10 + num % 10;
        num=num/10;
    }
    printf("the reversed number is %d\n",reversed);
    if(orignalnumber==reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("enter a number to check a palindrome number or not\n");
    scanf("%d",&number);
    if(palindrome(number))
    {
        printf("this is a palidrome number\n");
    }
    else
    {
        printf("this is not a palindrome number\n");
    }
    return 0;
}
