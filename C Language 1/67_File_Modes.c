#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67_Reading.txt","r");
    char c = fgetc(ptr);
    printf("the character i read was %c\n",c);
    c = fgetc(ptr);
    printf("the character i read was %c\n",c);
    fclose(ptr);
    ptr = fopen("67_Reading.txt","r");
    char str[45];
    fgets(str,10,ptr);
    printf("the string is %s\n",str);
    fclose(ptr);
    ptr = fopen("67_Writing.txt","w");
    fputc('o',ptr);
    fputs("this is kailash",ptr);
    fclose(ptr);
    ptr = fopen("67_Attach.txt","a");
    fputc('k',ptr);
    fputs("this is karan",ptr);
    fclose(ptr);
    ptr = fopen("67_Reading+.txt","r+");
    fputc('o',ptr);
    fputs("this is kailash",ptr);
    fclose(ptr);
    ptr = fopen("67_Writing+.txt","w+");
    fputc('o',ptr);
    fputs("this is shaw",ptr);
    fclose(ptr);
    ptr = fopen("67_Attach+.txt","a+");
    fputc('t',ptr);
    fputs("this is komal",ptr);
    fclose(ptr);
    return 0;
}