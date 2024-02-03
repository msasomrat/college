#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p, q,sum1=0;
    cin>>p;
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<p; i++){
        if(arr[i+1]>arr[i]){
            sum1 +=arr[i+1]-arr[i];
            i++;
        }
        else{
            continue;
        }
    cin>>q;
    int arr1[q];
    for (int i = 0; i < q; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<q; i++){
        if(arr1[i+1]>arr1[i]){
            sum1 +=arr[i+1]-arr[i];
            i++;
        }
        else{
            continue;
        }
    }
    /*for (int i = 0; i < arr[0]; i++)
    {
         cin>>arr[i];
    }
    for (int i = 0; i < arr[0]; i++)
    {
         cin>>arr1[i];
    }
    for (int i = 2; i <arr[0]; i++)
    {
        if(arr[i]>arr[i-1]){
            p+= arr[i]-arr[i-1];
        }
    }
    for (int i = 2; i <arr[0]; i++)
    {
        if(arr1[i]>arr1[i-1]){
            q+= arr1[i]-arr1[i-1];
        }
    }
    */
    if(sum1>=n){
        cout<<"I become the guy.";
    }
    else
        cout<<"Oh, my keyboard!";

    return 0;
    
}
}