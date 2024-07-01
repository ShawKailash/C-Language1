#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the value no %d of this array is %d\n",i,ptr[i]);
    }
    printf("enter the size of new array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter the new value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the new value no %d of this array is %d\n",i,ptr[i]);
    }
    return 0;
}