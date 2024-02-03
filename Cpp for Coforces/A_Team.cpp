#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, count=0;
    cin>> a>> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i]>=arr[b-1]&&(arr[i]!=0))
        {
            count++;
        }
        
    }
    
    cout<<count<<endl;
    
    return 0;
}