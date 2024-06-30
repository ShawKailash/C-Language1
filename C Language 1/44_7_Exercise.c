#include<stdio.h>
void drivernumber(int n)
{
    char name[40];
    char dln[40];
    char route[20];
    int kms;
    for(int i=1;i<=n;i++)
    {
        printf("enter the %d name is ",i);
        scanf("%s",&name);
        printf("enter the %d dln is ",i);
        scanf("%s",&dln);
        printf("enter the %d route is ",i);
        scanf("%s",&route);
        printf("enter the %d kms is ",i);
        scanf("%d",&kms);
    }
}
int main()
{
    int n;
    printf("enter the driver number is ");
    scanf("%d",&n);
    drivernumber(n);
    return 0;
}