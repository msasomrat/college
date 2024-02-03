#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k, sum=0, count=0, i;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        sum += i*5;
        if (sum> 240-k)
        {
            break;
        }
        
    }
    cout<<i-1<<endl;
    return 0;
}