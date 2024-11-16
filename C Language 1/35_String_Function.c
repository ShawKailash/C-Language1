#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="kailash";
    char s2[]="kumar";
    char s3[]="kailash";
    char s4[]="kumar";
    char s5[50];
    char s6[]="kailash";
    char s7[]="kumar";
    char st1[40];
    char st2[40];
    char st3[]=" is a friend of ";
    puts(strcat(s1,s2));
    printf("the length of s3 is %d\n",strlen(s3));
    printf("the length of s4 is %d\n",strlen(s4));
    printf("the reversed string s3 is ");
    puts(strrev(s3));
    printf("the reversed string s4 is ");
    puts(strrev(s4));
    strcpy(s5,s1);
    puts(s5);
    printf("the strcmp for s6,s7 returned %d\n ",strcmp(s6,s7));
    printf("\n");
    printf("enter the st1 name is ");
    gets(st1);
    printf("enter the st2 name is ");
    gets(st2);
    puts(strcat(st1,(strcat(st3,st2))));
    return 0;
}
