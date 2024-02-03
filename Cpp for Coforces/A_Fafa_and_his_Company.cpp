#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=0;
    cin>>n;
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i==0 && (n-i)%i==0)
        {
            count++;
        }
        
    }
    
    cout<<count<<endl;
    
    return 0;
}