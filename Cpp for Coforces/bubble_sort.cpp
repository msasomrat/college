#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);              
            }
                
        }
            
    }
        
}

void print_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
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
    bubble_sort(arr, n);
    cout<<"After sorting"<<endl;
    print_sort(arr, n);
    return 0;
}