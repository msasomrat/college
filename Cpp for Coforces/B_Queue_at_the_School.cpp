#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    string str;
    cin>>n>>t;
    cin>>str;
    while(t--)
    {
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B' && str[i+1] == 'G')
        {
            swap(str[i+1], str[i]);
            i++;
        }
        
    }
    }
    cout<<str<<endl;
}