#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, count=0;
    string str;
    cin>> str;
    k= stoi(str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='4' || str[i]== '7')
        {
            count++;
        }
        
    }
    if (count == str.length())
    {
        cout<<"YES";
        goto jump;
    }
    else if ((k%4 == 0)|| (k%7 ==0))
    {
        cout<<"YES";
        goto jump;
    }
    
        
    else
    {
        cout<<"NO";
        goto jump;
    }
    
    
    jump:
    {
        return 0;
    }
    
}