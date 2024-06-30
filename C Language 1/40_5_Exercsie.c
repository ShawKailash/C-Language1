#include<stdio.h>
void arrayrev(int arr[])
{
    int temp;
    for(int i=0;i<9/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[8-i];
        arr[8-i]=temp;
    }
}
void arrayfor(int arr[])
{
    for(int i=0;i<9;i++)
    {
        printf("the value of element %d is %d\n",i,arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("before reversing the array\n");
    arrayfor(arr);
    printf("\n");
    printf("after reversing the array\n");
    arrayrev(arr);
    arrayfor(arr);
    return 0;
}