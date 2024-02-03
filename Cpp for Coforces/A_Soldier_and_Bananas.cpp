#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1, a, b, c, sum=0, sum2, count=1;
    cin>>a>>b>>c;
    
    for ( i = 1; i<=c ; i++)
    {
        sum=sum+a*i;
    }
    if (sum>b)
    {
        cout<<sum-b;
    }
    if (sum<=b)
    {
        cout<<0;
    }
 return 0;   
}