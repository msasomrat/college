#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,k,count=0;
    cin>> n>> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    k=k-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>= arr[k] && arr[i]>0 )
        {
            count++;
        }
        
    }
    
    cout<<count;

    return 0;
}
