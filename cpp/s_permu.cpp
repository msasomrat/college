#include<bits/stdc++.h>
using namespace std;
int next_permu(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i]!= i+1)
        {
            count++;
        }
        
            
    }
    if(count == n)
    {
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<< " ";
            }
            cout<<endl;
            return 0;
    }
    
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count;
    cin>>n;
    
    while(n--)
    {
        int q;
        cin>>q;
        int arr[q];
        for (int i = 0; i < q; i++)
        {
            arr[i]= i+1;
        }
    while(next_permutation(arr, arr+q))
    {
           int p= next_permu(arr, q);
           if(p==0) break;
    }
    }

    
    return 0;
}