#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, count=0;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]<= h)
        {
            count++;
        }
        if (arr[i]> h)
        {
            count +=2 ;
        }
        
    }
    
    cout<<count;
    return 0;
}