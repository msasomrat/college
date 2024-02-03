#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        int p;
        cin>>p;
        for (int i = 0; i < p; i++)
        {
           cout<< (i+1)%p+1<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
