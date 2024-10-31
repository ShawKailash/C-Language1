/*
    write a program is to pass for subject for provide gift
    math and sicence pass gift is 45
    sicence pass gift is 15
    math pass gift is 15
*/
#include<stdio.h>

int main()
{
    int subject;
    printf("which subject pass\n");
    printf("1 for math and science\n");
    printf("2 for science\n");
    printf("3 for math\n");
    scanf("%d",&subject);
    
    if(subject==1)
    {
        printf("congrats your prize is 45\n");
    }
    else if(subject==2)
    {
        printf("congrats your prize is 15\n");
    }
    else if(subject==3)
    {
        printf("congrats your prize is 45\n");
    }
    return 0;
}
