#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b)
{
    return a+b;
}
void greethello(int (*fptr)(int, int))
{
    printf("hello user\n");
    printf("the sum of 3 and 7 is %d\n",fptr(3,7));
}
void greetgoodmorning(int (*fptr)(int, int))
{
    printf("good morning user\n");
    printf("the sum of 2 and 4 is %d\n",fptr(2,4));
}
void greetgoodafternoon(int (*fptr)(int, int))
{
    printf("good after noon user\n");
    printf("the sum of 6 and 8 is %d\n",fptr(6,8));
}
void greetgoodevening(int (*fptr)(int, int))
{
    printf("good evening user\n");
    printf("the sum of 9 and 7 is %d\n",fptr(9,7));
}
void greetgoodnight(int (*fptr)(int, int))
{
    printf("good night user\n");
    printf("the sum of 5 and 3 is %d\n",fptr(5,3));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greethello(ptr);
    greetgoodmorning(ptr);
    greetgoodafternoon(ptr);
    greetgoodevening(ptr);
    greetgoodnight(ptr);
    return 0;
}
