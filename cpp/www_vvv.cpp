#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>> s;
    int l=0;
    for (int i = 0; i < s.length(); i++)
    {
       if (s[i]=='v'|| s[i]=='V')
       {
        ++l;
       }
       else if(s[i]=='w'||s[i]=='W')
       {
        l +=2;
       }
       
    }
    cout<<l<<endl;
    
    return 0;

}