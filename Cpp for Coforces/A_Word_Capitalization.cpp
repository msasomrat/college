#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000];
    cin>>arr;
    for (int i = 0; arr[i]  !='\0'; i++)
    {
        if ('a'<=arr[i]<='z' && i==0)
        {
            cout<<(char)toupper(arr[i]);
        }
        
    else
    {
        cout<<arr[i];
    }
    }
    
    
}