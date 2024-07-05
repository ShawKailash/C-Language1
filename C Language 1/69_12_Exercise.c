#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * replaceword(const char * str, const char * oldword, const char * newword)
{
    char * resultstring;
    int i, count=0;
    int newwordlength=strlen(newword);
    int oldwordlength=strlen(oldword);
    for(i=0;str[i]!='\0';i++)
    {
        if(strstr(&str[i],oldword)==&str[i])
        {
            count++;
            i=i+oldwordlength;
        }
    }
    resultstring=(char *)malloc(i + count * (newwordlength-oldwordlength) + 1);
    i=0;
    while(*str)
    {
        if(strstr(str,oldword)==str)
        {
            strcpy(&resultstring[i],newword);
            i+=newwordlength;
            str+=oldwordlength;
        }
        else
        {
            resultstring[i]= *str;
            i+=1;
            str+=1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    FILE * ptr =NULL;
    FILE * ptr2 =NULL;
    ptr = fopen("69_12_Bill.txt","r");
    ptr2 = fopen("69_12_New_Bill.txt","w");
    char str[200];
    fgets(str,200,ptr);
    printf("the given bill template was : %s\n",str);
    char *newstr;
    newstr = replaceword(str,"{{name}}","kailash");
    newstr = replaceword(newstr,"{{item}}","laptop");
    newstr = replaceword(newstr,"{{outlet}}","shaw shop");
    printf("the actual bill generated is : %s\n",newstr);
    printf("the generated bill has been written to the file 69_12_New_Bill.txt\n");
    fprintf(ptr2,"%s",newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}