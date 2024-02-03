#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n ,count=0;
    cin>>n;
    
    while(n--)
    {
        long long int m;
        cin>>m;
        int arr[m];
        for (long long i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
        long long mn= arr[m-1];
        for (long long i = m-2; i >=0; i--)
        {
            if (arr[i]> mn)
            {
                count++;
            }
             mn = min(arr[i], mn);
            
        }
        
        
         
    }
    cout<<count<<endl;
    
    return 0;
}