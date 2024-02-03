#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string str, str1;
    cin>> str >> str1;
    reverse(str.begin(), str.end());
    
    k= str.compare(str1);
    if (k==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
}