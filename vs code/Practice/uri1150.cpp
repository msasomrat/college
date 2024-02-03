#include<iostream>
using namespace std;
int main()
{
    int i,x,z,sum=0,count=1;

    cin>> x >> z;
    while (z<=x)
    {
        cin >> z;
        
        
    }
    for ( i = x; i <= z; i++)
    {
        sum= sum+i;
       if (sum>z)
       {
           break;
       }
       count++;
            
            
    }
    
        
    cout<< count<<endl;

    return 0;
}