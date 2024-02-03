#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n, count= 0;
    int temp=0;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        if (m!= temp)
        {
            count++;
            temp=m;
        }
        
    }
    cout<<count;
    return 0;
    
}