#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    char string[34];
    ptr=fopen("64_1_Reading.txt","r");
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s\n",string);
    return 0;
}