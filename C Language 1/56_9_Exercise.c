#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int rockpaperscissors(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    else if(you=='r' && comp=='p')
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
}
int main()
{
    char you,comp;
    int youscore=0,compscore=0;
    int temp;
    char dict[]={'r','p','s'};
    printf("welcome to rock , paper and scissors\n");
    for(int i=0;i<3;i++)
    {
        printf("you turn \n");
        printf("choose 1 for rock , 2 for paper and 3 for scissors\n");
        scanf("%d",&temp);
        you=dict[temp-1];
        printf("you choose %c\n\n",you);
        printf("comp turn \n");
        printf("choose 1 for rock , 2 for paper and 3 for scissors\n");
        temp=generaterandomnumber(3)+1;
        comp=dict[temp-1];
        printf("comp choose %c\n\n",comp);
        if(rockpaperscissors(you,comp)==1)
        {
            youscore += 1;
            printf("you got it\n");
        }
        else if(rockpaperscissors(you,comp)==0)
        {
            youscore += 1;
            compscore += 1;
            printf("game drow!\n");
        }
        else
        {
            compscore += 1;
            printf("comp got it\n");
        }
        printf("you %d\ncomp %d\n\n",youscore,compscore);
    }
    if(youscore>compscore)
    {
        printf("you win the game\n");
    }
    else if(youscore<compscore)
    {
        printf("comp win the game\n");
    }
    else
    {
        printf("its a draw\n");
    }
    return 0;
}