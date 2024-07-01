#include<stdio.h>
struct driver
{
    char name[30];
    char dln[30];
    char route[30];
    int kms;
};
int main()
{
    struct driver d;
    int num;
    printf("enter the driver number is ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("enter the %d driver name is ",i);
        scanf("%s",&d.name);
        printf("enter the %d driver dln is ",i);
        scanf("%s",&d.dln);
        printf("enter the %d driver route is ",i);
        scanf("%s",&d.route);
        printf("enter the %d driver kms is ",i);
        scanf("%d",&d.kms);
    }
    return 0;
}