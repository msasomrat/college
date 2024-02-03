#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s,m;
    cin>>n;
    int count = 0, count1=0; 
   /* while (n > 0)
    {
        s=n%10;
        n /=10;
        if(s == 7 || s==4)
        {
            count++;
            
            
           
        }
        count1++;
        
        
    } */
    //if (count == count1)
   // {
        if (n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%777==0 )
        {
            cout<<"YES";
        }
        
    //}
    else
    {
        cout<<"NO";
    }
    
    return 0;
}