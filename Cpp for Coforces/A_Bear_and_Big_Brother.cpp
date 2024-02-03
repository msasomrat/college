#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1, a, b, sum1, sum2, count=1;
    cin>>a>>b;
    sum1=a*3;
    sum2=b*2;
    for ( i = 1; ; i++)
    {
        
       if (sum1<=sum2)
       {
        sum1 *=3;
        sum2 *=2;
        count++;
        continue;
       }
       if (sum1>sum2)
       {
        break;
       }
       
       
    }
    cout<<count;
    return 0;
}