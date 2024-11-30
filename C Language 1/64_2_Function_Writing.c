#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    char string[100]="this content was produced by sentence";
    ptr = fopen("64_2_Writing.txt","w");
    fprintf(ptr,"%s",string);
    return 0;
}
