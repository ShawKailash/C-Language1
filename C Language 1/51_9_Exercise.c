#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperscissors(char you, char comp)
{
    if(you=='r' && comp=='p')
    {
        return -1;
    }
    else if(you='p' && comp=='r')
    {
        return 1;
    }
    if(you=='p' && comp=='s')
    {
        return -1;
    }
    else if(you='s' && comp=='p')
    {
        return 1;
    }
    if(you=='s' && comp=='r')
    {
        return -1;
    }
    else if(you='r' && comp=='s')
    {
        return 1;
    }
    if(you==comp)
    {
        return 0;
    }
}
int main()
{
    char you,comp;
    srand(time(0));
    int number=rand()%100+1;
    if(number<33)
    {
        comp='r';
    }
    else if(number>33 && number<66)
    {
        comp='p';
    }
    else
    {
        comp='s';
    }
    printf("enter 'r' for rock, 'p' for paper and 's' for scissor\n");
    scanf("%c",&you);
    int result = rockpaperscissors(you,comp);
    if(result==0)
    {
        printf("game drow!\n");
    }
    else if(result==1)
    {
        printf("you win!\n");
    }
    else
    {
        printf("comp win!\n");
    }
    printf("you choose %c and computer choose %c",you,comp);
    return 0;
}