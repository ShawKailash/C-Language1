#include<stdio.h>
int func1(int array[])
{
    for(int i=0;i<4;i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
    }
}
void func2(int *ptr)
{
    for(int j=0;j<4;j++)
    {
        printf("the value at %d is %d\n",j,*(ptr+j));
    }
}
void func3(int arra[2][2])
{
    for(int k=0;k<2;k++)
    {
        for(int l=0;l<2;l++)
        {
            printf("the value at %d,%d is %d\n",k,l,arra[k][l]);
        }
    }
}
int main()
{
    int arr[]={45,78,57,98};
    printf("the value at index 0 is %d\n",arr[0]);
    func1(arr);
    printf("the value at index 0 is %d\n",arr[0]);
    printf("\n");
    func2(arr);
    func2(arr);
    printf("\n");
    int arra[][2]={{34,23},{67,89}};
    func3(arra);
    return 0;
}
