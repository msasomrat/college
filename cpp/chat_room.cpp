#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0, x=0;
    string s;
    cin>>s;
    string s1= "hello";
    for (int i = 0; i < s.size(); i++)
    {
    
        if (s[i]== s1[x])
        {
            count++;
            x++;
        }
        
    }
    if (count == 5)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    
    return 0;
    
}