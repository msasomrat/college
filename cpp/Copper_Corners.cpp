#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result=0;
    cin>>n;
    int arr[n][n];
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];

        }
        
    }
    if (n==1)
    {
        result= arr[0][0];
    }
    else
    {
        result= arr[0][0]+ arr[0][n-1]+arr[n-1][n-1]+arr[n-1][0];
    }
    cout<< result<<endl;
    
    
    
    return 0;

}