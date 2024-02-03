#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 9; i >=0; i--)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}