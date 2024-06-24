#include<stdio.h>

int main()
{
    int age;
    printf("enter your age is\n");
    scanf("%d",&age);
    switch(age)
    {
        case 22:
        printf("your age is 22 complete\n");
        break;
        case 23:
        printf("your age is 23 this time\n");
        break;
        case 24:
        printf("your age is 24 upcoming\n");
        break;
        default:
        printf("your age is not 22, 23, 24!");
    }
    return 0;
}