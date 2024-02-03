#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[]= {5,4,3,2,1}, s;
    cin>>n;
    if (n<5)
    {
        for (int i = 1; i < 5; i++)
    {
        if ( n / arr[i] >= 1)
        {
            s= n / arr[i]; 
        if (n % arr[i] != 0)
        {
            s++;
        }
            break;
        }   
    }
    }
    else
    {
        s=n/5;
        if (n % 5 != 0)
        {
            s++;
        }
        
    }
    cout<<s;
    return 0;
}