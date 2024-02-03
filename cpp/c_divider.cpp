#include<bits/stdc++.h>
using namespace std;
void b_division(int n)
{
    int arr[]= {1,2,3,4};
    if(n >= 1900)
    {
        cout<<"Division "<< arr[0]<< endl;
    }
    if(n >= 1600 && n <= 1899)
    {
        cout<<"Division "<< arr[1]<< endl;
    }
    if(n >= 1400 && n <= 1599)
    {
        cout<<"Division "<< arr[2]<< endl;
    }
    if(n <= 1399)
    {
        cout<<"Division "<< arr[3]<< endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    
    while(n--)
    {
        int q;
        cin>>q;
        b_division(q);
    }
    
    return 0;
}