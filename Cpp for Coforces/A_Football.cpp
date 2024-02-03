#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int count=1, count1=0;
    cin>>arr;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if ((arr[i] == arr[i+1]))
        {
            count++;
        }
        if (count>=7)
        {
            break;
            goto print;
        }
        
        if ((arr[i] != arr[i+1]))
        {
            count=1;
            continue;
        }
        
    }
    print:
    if (count>=7)
    {
        cout<<"YES";
    }
    
    else
    {
        cout<<"NO";
    }
    return 0;
}