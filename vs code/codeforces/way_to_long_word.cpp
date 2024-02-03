#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for (int j = 0; j < n; j++)
    {
        char arr[100];
         cin>>arr;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
        
    }
    if(count<=10)
    {
        for (int k = 0; arr[k] != '\0'; k++)
        {
            cout<<arr[k];
        }
        cout<<'\n';
    }
    else
    {
        cout<<arr[0]<<count-2<<arr[count-1]<<'\n';
    }
    
    count=0;
    }
    
    return 0;
}