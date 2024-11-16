#include<stdio.h>

void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[]={'k','a','i','l','a','s','h','\0'};
    printstr(str);
    printf("\n");
    char str1[5]="shaw";
    printstr(str1);
    printf("\n");
    char s[20];
    gets(s);
    printf("using printf %s\n",s);
    printf("using puts:\n");
    puts(s);
    return 0;
}
