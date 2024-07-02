#include<stdio.h>

int main()
{
    int a=34;
    int *ptr=NULL;
    if(ptr!=NULL)
    {
        printf("the address of a is %d\n",ptr);
    }
    else
    {
        printf("the pointer is a nullpointer and cannot be dereferenced");
    }
    return 0;
}