#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp= *x;
    *x = *y;
    *y = temp;
}
void selection_sort(int arr1[], int n)
{
    int i,j,min_idx;
    int k=n;
    for ( i = 0; i < k; i++)
    {
        min_idx = i;
        for ( j = i+1; i < k; j++)
        
        if (arr1[j]< arr1[min_idx])
           {
                min_idx = j;
           }
        swap(&arr1[min_idx], &arr1[i]);
           
        
        
    }
    
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
    int n, sum1=0, sum2=0;
    //int i=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selection_sort( arr, n);
    print_array( arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<'\n';
    }
    
    /*
    for (int i = 0; i < n; i++)
    {
        sum1 +=arr[i];
        for (int j = n; i>n-i; j--)
        {

            sum2 += arr[j];
            if (sum1>sum2)
            {
                break;
            }
            
        }
        if (sum1>sum2)
        {
            break;
        }
        
        
    }
    cout<< i ;  
    */
}