#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    return sqrt(a);
}
float areaofcircle(int x1, int y1, int x2, int y2, float(*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}
int main()
{
    int x1, y1, x2, y2;
    float dst;
    printf("enter the value of x1 is\n");
    scanf("%d",&x1);
    printf("enter the value of y1 is\n");
    scanf("%d",&y1);
    printf("enter the value of x2 is\n");
    scanf("%d",&x2);
    printf("enter the value of y2 is\n");
    scanf("%d",&y2);
    dst = areaofcircle(x1, y1, x2, y2, edistance);
    printf("the distance these points is %.2f\n",dst);
    return 0;
}