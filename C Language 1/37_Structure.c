#include<stdio.h>
struct student
{
    int id;
    int marks;
    char favchar;
};
int main()
{
    struct student kailash, karan, komal;
    kailash.id = 1;
    karan.id = 2;
    komal.id = 3;
    kailash.marks = 56;
    karan.marks = 34;
    komal.marks = 45;
    kailash.favchar = 'k';
    karan.favchar = 'a';
    komal.favchar = 'i';
    printf("kailash got %d\n",kailash.id);
    printf("kailash got %d\n",kailash.marks);
    printf("kailash got %d\n",kailash.favchar);
    printf("karan got %d\n",karan.id);
    printf("karan got %d\n",karan.marks);
    printf("karan got %d\n",karan.favchar);
    printf("komal got %d\n",komal.id);
    printf("komal got %d\n",komal.marks);
    printf("komal got %d\n",komal.favchar);
    return 0;
}