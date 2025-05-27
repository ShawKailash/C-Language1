#include<stdio.h>
#include<string.h>
union student
{
    int id;
    int marks;
    char favchar;
    char name[40];
};
int main()
{
    union student s1;
    s1.id=1;
    s1.marks=47;
    s1.favchar='k';
    strcpy(s1.name,"kailash");

    printf("the id is %d\n",s1.id);
    printf("the marks is %d\n",s1.marks);
    printf("the favchar is %c\n",s1.favchar);
    printf("the name is %s\n",s1.name);
    return 0;
}
