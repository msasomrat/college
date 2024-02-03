#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>> s;
    int n= s.size()-1, l=0;
    while(n>l)
    {
    if(s[l++]!= s[n--])
    {
        cout<<s<<" "<<"is not a Palidrone";
        return 0;
    }
    }
    cout<< s<< " "<< " is a palidrone";
    return 0;

}