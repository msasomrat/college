#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string a;
    cin>>n;
    for (int i = 0; i < 18; i++)
    {
        a +="Yes";
    }
    while(n--)
    {
        string s;
        cin>>s;
        if(a.find(s) !=-1){
            cout<<"YES"<< endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
    
}