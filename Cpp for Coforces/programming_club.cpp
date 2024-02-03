#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    int m,p;
    cin>>n;
    m=n*10;
    p=m%10;
    if(p>=0 && p <= 2)
        cout<<m/10<<"-";
    if(p>=3 && p <= 6)
        cout<<m/10;
    if(p>=7 && p <= 9)
        cout<<m/10<<"+";
    
    return 0;
}