#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k, count=0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]+k <=5)
        {
            count++;
        }
        
    }
    cout<<count/3<<endl;
    
    
    return 0;

}