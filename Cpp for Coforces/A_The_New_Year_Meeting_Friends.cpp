#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, h, l;
    cin>> a>> b>> c;
    if (a>b && a>c)
    {
        h=a;
    }
    else if (b>a && b>c)
    {
        h=b;
    }
    else
    {
        h=c;
    }
    if (a<b && a<c)
    {
        l=a;
    }
    else if (b<a && b<c)
    {
        l=b;
    }
    else
    {
        l=c;
    }

    cout<< h-l <<endl;
    
    return 0;
}
