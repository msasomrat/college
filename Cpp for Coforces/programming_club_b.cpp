#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,array[50000],sum=0, i_no,j_no,k_no;
    bool p=0;
    cin>>t;
    while(t--){
        cin>>n;
        for(long long i=0; i<n; i++){
            cin>>array[i];
        }
        for(long long j=0; j<n; j++){
            sum=array[j]+array[j+1];
            i_no=j;
            j_no=j+1;
            for (long long k = j+2; k<n; k++){
                if (array[k]>sum){
                    k_no=k;
                    p=1;
                    break;
                }
                
            }
           if (p==1){
            break;
           }
            
        }
        if(p==1){
        cout<<i_no+1<<" "<<j_no+1<<" "<<k_no+1;
    }
    else{
        cout<<-1;
    }
        
    }
    return 0;
    
}