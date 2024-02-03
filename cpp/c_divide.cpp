#include<bits/stdc++.h>
using namespace std;
void b_division(long long int n, int count)
{
    long long int m=n;
   if (m==1)
   {
        cout<< count<< endl;
   }
    else if( m%2!=0 && m%3!=0 && m%5!=0)
    {
        cout<<"-1"<<endl;
    }

    if(m%5==0){
        m=4*m/5;
        count++;
        b_division(m, count);
    }
    else if(m%3==0){
        m=2*m/3;
        count++;
        b_division(m, count);
    }
    else if(m%2==0){
        m=m/2;
        count++;
        b_division(m, count);
    }
   
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    
    while(n--)
    {
         long long int q;
        cin>>q;
        b_division(q, 0);
    }
    
    return 0;
}