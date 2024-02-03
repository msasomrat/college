#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, x=0;
    cin>>a;
    while(a--)
    {
        string s;
        cin>>s;
        if (s=="++X"|| s=="X++"||s=="++x"|| s=="x++")
        {
           x++;
        }
        if (s=="--X"|| s=="X--"||s=="--x"|| s=="x--")
        {
           x--;
        } 

    }
    cout<<x<<endl;
    
    return 0;
}