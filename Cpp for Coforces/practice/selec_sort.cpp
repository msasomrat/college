#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp= *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[], int n)
{
    int min, i;
    for (int i = 0; i < n; i++)
    {
        min=i;
        for (int j = i; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
            
        }
        swap(&arr[min], &arr[i]);
           
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sort"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }

   selection_sort(arr, n);
   cout<<"After Sort"<<"\n";
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<"\t";
   }
   
}