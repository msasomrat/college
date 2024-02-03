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
        else if (x1<1|| y1>n)
        {
           int a= min(min(p-x2+1, p-y2+1), min(x2,y2));
           cout<<a<<endl;
           continue;
        }
       else if (x2<1|| y2>n)
        {
           int a= min(min(p-x1+1, p-y1+1), min(x1,y1));
           cout<<a<<endl;
           continue;
        }
        int a= min(min(p-x1+1, p-y1+1), min(x1,y1));
        int b= min(min(p-x2+1, p-y2+1), min(x2,y2));
        int c= abs(x1-x2)+abs(y1-y2);
        cout<<min(c, a+b)<<endl;
        

        
    }
    
    return 0;

}