#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int s,m;
    cin>>n;
    int count = 0; 
    while (n > 0)
    {
        s=n%10;
        n /=10;
        if(s == 7 || s==4)
        {
            count++;
            
            
           
        }
        
        
    }
    if (count == 4 || count ==7)
    {
        cout<< "YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}