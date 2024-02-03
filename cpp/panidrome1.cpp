#include<bits/stdc++.h>
using namespace std;
void ispalindrome(string str)
{
    int l=0;
    int h= str.size()-1;
    while(h>l)
    {
        if(str[l++]!= str[h--])
        {
            cout<< str << "is not palindrome";
            return;
        }
    }
    cout<<str<< "is panidrome";
}
int main()
{
    string s;
    cin>>s;
    ispalindrome(s);
    return 0;
}