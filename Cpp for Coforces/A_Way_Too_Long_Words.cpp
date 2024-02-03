#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    while(a--)
    {
        string s;
        cin>>s;
        int i= s.size();
        if (i>10)
        {
           cout<<s[0]<<i-2<<s[i-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }  

    }
    
    return 0;
}