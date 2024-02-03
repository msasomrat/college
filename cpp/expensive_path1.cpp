#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    while(n--)
    {
        int p, x1,y1,x2,y2;
        cin>>p>>x1>>y1>>x2>>y2;
        if (x1<1 && y1>n && x2<1 && y2>n)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int x=abs(x2-x1);
            int y= abs(y2-y1);
            cout<< x+y<<endl;
        }

        
    }
    
    return 0;

}