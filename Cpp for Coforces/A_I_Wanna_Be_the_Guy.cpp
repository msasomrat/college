#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,arr[300],i, count = 0;
    cin>>n;
    cin>>p;
    for(i=0; i<p; i++){
        cin>>arr[i];
    }
    cin>>q;
    for(i=p; i<p+q; i++){
        cin>>arr[i];
    }
    sort(arr, arr+p+q);
    for (int j = 0; j < p+q; j++){
        if(arr[j]!= arr[j+1]){
            count++;
        }
    }
    if(count>=n){
        cout<<"I become the guy.";
    }
    else
        cout<<"Oh, my keyboard!";
    
    return 0;
}