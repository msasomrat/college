#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool found=0;
    for (int i = 0; i < s.length(); i++)
    {
       if (s[i]=='H'||s[i]=='Q'||s[i]=='9')
       {
            found =1;
            break;
       }
       
    }
    if (found==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
}