#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5], a,b,c,d;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    /*
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]==1)
            {
                a=i;
                b=j;
            }
            
        }
       
    }

    // cout<<a<<" "<<b<< endl;
    if (a<=2 && b<=2)
    {
        c=2-a;
        d=2-b;  
    }
    if (a<=2 && b>=2)
    {
        c=2-a;
        d=b-2;  
    }
    if (a>=2 && b<=2)
    {
        c=a-2;
        d=2-b;  
    }
    if (a>=2 && b>=2)
    {
        c=a-2;
        d=b-2;  
    }
    cout<<c+d;
    return 0;
}