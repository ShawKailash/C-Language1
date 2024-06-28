#include<stdio.h>

int main()
{
    int a=34;
    int *ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+2);
    printf("%d\n",ptr-1);
    printf("%d\n",ptr-2);
    printf("\n");
    char c='e';
    char *ptrc=&c;
    printf("%d\n",ptrc);
    printf("%d\n",ptrc+1);
    printf("%d\n",ptrc+2);
    printf("%d\n",ptrc-1);
    printf("%d\n",ptrc-2);
    return 0;
}