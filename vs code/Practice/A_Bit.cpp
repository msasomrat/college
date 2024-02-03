#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans=0;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        if (s=="++X" || s=="X++")
        {
            ans++;
        }
        else
        {
            ans--;
        }
        
    }
    cout<<ans;
    
}