#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        int p,q, team;
        cin>>p>>q;
        team= min(min(p,q), (p+q)/4);
        cout<<team<<endl;
    }

    return 0;
}
