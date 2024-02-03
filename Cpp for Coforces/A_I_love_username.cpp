#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count=0;
    cin>>n;
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int h=arr[0];
    int l= arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>h)
        {
            count++;
            h=arr[i];
        }
        if (arr[i]< l)
        {
            count++;
            l=arr[i];
        }
        
        
    }
    cout<<count<< endl;
    

    
    return 0;
}
