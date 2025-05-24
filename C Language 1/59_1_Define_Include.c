#include<stdio.h>
#include"59_2_Attach_Sum.c"
#define PI 3.14
#define SQUARE(r) r*r

int main()
{
    float var = PI;
    int r=4;
    printf("the value of PI is %f\n",var);
    printf("the area of this circle is %f\n",PI*SQUARE(r));
    return 0;
}
