#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];
        if ((arr[0]+arr[1]+arr[2])>=2)
        {
            count++;
        } 
        
    }
    cout<<count<<'\n';
    
}