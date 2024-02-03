#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll  n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++){
       cin>>arr[i];
    }
    int sum=1, sum1=1;
    for(ll j=1; j<n; j++){
         
        if(arr[j]>=arr[j-1]){
            sum++;
            if(sum>sum1){
            sum1=sum;
            
        }
        

        }
        
        else{
            sum=1;
        }
    }
    cout<<sum1;
    
}