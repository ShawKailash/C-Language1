#include<stdio.h>
#include<string.h>
void parser(char string[])
{
    for(int i=5;i<strlen(string)-6;i++)
    {
        printf("%c",string[i]);
    }
}
int main()
{
    char string[]="<h1> this is a mango </h1>";
    parser(string);
    return 0;
}
