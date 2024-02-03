#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>> a>> b;
    
    if (a==b)
    {
        cout<< a<<" "<<0<<endl;
    }
    if (a>b)
    {
        cout<< b<<" "<<abs(a-b)/2<<endl;
    }
    if (b>a)
    {
        cout<< a<<" "<<abs(a-b)/2<<endl;
    }

    
    return 0;
    
}
