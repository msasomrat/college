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
        long long int p;
        cin>>p;
        if(p<=2)
        {
            cout<<0<<endl;
        }
        else 
        {
            if (p%2 ==0)
            {
                cout<< (p/2)-1<< endl;
            }
            else
                cout<< (p/2)<< endl;
        }
    }

    return 0;
}
