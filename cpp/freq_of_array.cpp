#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count;
    cin>>n;
    int arr[n], freq[n];
    for(int i= 0; i< n; i++)
    {
        cin>>arr[i];
        freq[i]=-1;
    }
    for(int i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]== arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!= 0)
        {
            freq[i]=count;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(freq[i]!=0){
            cout<<arr[i]<<" occurs times "<<freq[i]<<endl;
        }
    }

    return 0;
}