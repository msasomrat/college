#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++)
        { 
            if (arr[j] > arr[min_idx])
            { 
                min_idx = j; 
            }
        }
        
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
int main()
{
    int n, sum1=0, sum2=0, count=0;
    int i=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionSort( arr, n);
    //printArray( arr, n);
    
    
    for ( i = 0; i < n; i++)
    {
        sum1 +=arr[i];
        for (int j = n-1; j>i; j--)
        {
            sum2 += arr[j];
        }
        if (sum1>sum2)
        {
            break;
        }
        else
        {
            sum2=0;
            count++;
            continue;
        }
        
        
    }
    cout<< i+1 ;  
    
}