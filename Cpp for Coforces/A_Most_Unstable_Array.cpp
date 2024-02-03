#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    while(n--)
    {
        long long p, q;
        cin>>p>>q;
        if (p==1)
        {
            cout<<0<<endl;
        }
        else if (p==2)
        {
            cout<<q<<endl;
        }
        else
        {
            cout<< (q-2)*2+ 2*2<<endl;
        }
        
    }
    
    return 0;

}