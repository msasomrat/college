#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n, count= 0;
    cin>>n;
    string s[n*2];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
   for(int i=0; i<n; i++)
   {
        if (s[i]!= s[i+1])
        {
            count++;
        }
        
   }
    cout<<count;
}