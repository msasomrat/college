#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0, count1=0;
    cin>>n;
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            count++;
        }
        else
            count1++;
        
        
    }
    if (count>count1)
    {
        cout<<"Anton"<<endl;
    }
    if (count == count1)
    {
        cout<<"Friendship"<<endl;
    }
    if (count < count1)
    {
        cout<<"Danik"<<endl;
    }
    return 0;
    
}