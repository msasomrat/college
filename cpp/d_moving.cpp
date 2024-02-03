#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m, count1=0;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>> m;
        if (m%2 ==1)
        {
            count1++;
        }
        
    }
    
    cout<<min(count1, n-count1) << endl;
    
    return 0;
}