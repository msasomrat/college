#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count1=0, count2=0 ;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if ( (str[0]=='Y'|| str[0]=='y') && (str[1]=='E'|| str[1]=='e') && (str[2]=='S'|| str[2]=='s'))
        {
            count1++;
        }
        else
        {
            count2++;
        }
        
        
        
    }
    for (int i = 0; i < count1; i++)
    {
        cout<<"YES"<<endl;
    }
    
    for (int i = 0; i < count2; i++)
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}