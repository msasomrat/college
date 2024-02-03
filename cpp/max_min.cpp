#include<bits/stdc++.h>
using namespace std;

void min_max(int arr[], int n)
{
    int min , max;
    //n=sizeof(arr)/sizeof(arr[0]);
    if(n==1)
    {
        max=min=arr[0];
        //cout<< max;
    }
    if(arr[0]> arr[1]){
        max = arr[0];
        min = arr[1];
    }
    else{
        max = arr[1];
        min = arr[0];
    }
    for(int i=2; i<n ; i++)
    {
        if(arr[i]> max)
            max = arr[i];
        else if(arr[i]< min)
            min= arr[i];
    }
    cout<<"min is "<<min<<"  "<<"max is "<<max<< endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, arr[1000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    min_max(arr,n);
    return 0;

}