#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp; 
}
void selection_sort(int n, int arr[])
{
    int min_index;
    for (int i = 0; i < n; i++)
    {
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]< arr[min_index])
            {
                min_index= j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
    
}
void print_array(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[]={5,7,2,3,1,1,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    selection_sort(n, arr);
    print_array(n, arr);
}