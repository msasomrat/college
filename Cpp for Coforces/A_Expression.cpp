#include<bits/stdc++.h>
using namespace std;
/*
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
            if (arr[j] < arr[min_idx])
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
*/
int main()
{
    //int n;
    //cin>>n;
    int arr[3];
    int arr1[6];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    //selectionSort(arr, 3);
    arr1[0]= arr[0]*arr[1]+arr[2];
    arr1[1]= arr[0]+(arr[1]*arr[2]);
    arr1[2]= arr[0]*(arr[1]+arr[2]);
    arr1[3]= (arr[0]+arr[1])*arr[2];
    arr1[4]= arr[0]+arr[1]+arr[2];
    arr1[5]= arr[0]*arr[1]*arr[2];
    int c=arr1[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr1[i]>c)
        {
            c= arr1[i];
        }
        
    }
    
    cout<<c;
    //printArray(arr, n);
    /*
    long i, j;
    long n1= n;
    long  k1= k;
    long int arr[n], count=0;
    //cout<<n1<<" "<<k1;
    for ( i = 1, j=0; i <= n; i++)
    {
        if (i%2==1)
        {
            count++;
            arr[j]=i;
            j++;
        }
        
    }
    for ( j = count, i=1; i <= n; i++ )
    {
        if (i%2==0)
        {
            arr[j]=i;
            j++;
        }
           
    }
    cout<<arr[k-1];
    
   if (n%2==0)
   {
        mid =n/2;
   }
   else
   {
        mid= (n+1)/2;
   }
   if (k <= mid)
   {
        cout<< k*2-1;
   }
   else
   {
        cout<< (k-mid)*2;
   }
   */
   
   return 0; 
}
