#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    char string[100]="this content was produced by sentence add";
    ptr = fopen("64_3_Attach.txt","a");
    fprintf(ptr,"%s",string);
    return 0;
}
