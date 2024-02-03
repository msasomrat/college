#include<stdio.h>

void arr1(int arr[], int n)
{
    int temp=arr[0], i;

    for ( i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1]; 
    }
    arr[n-1]=temp;
    
}
void print(int arr[], int n)
{
    int i;

    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    arr1(arr,7);
   print(arr, 7);
    return 0;
}