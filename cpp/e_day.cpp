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
         int m, count=0;
        cin>>m;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin>>arr[i];
        }
         int mn= arr[m-1];
        for (int i = m-2; i >=0; i--)
        {
            if (arr[i]> mn)
            {
                count++;
            }
             mn = min(arr[i], mn);
            
        }
        
        cout<<count<<endl;
         
    }
    
    
    return 0;
}