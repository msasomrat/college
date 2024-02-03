#include<iostream>
#include<tgmath.h>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i;
    float x,y;
    
    int count=0;
    while (1)
    {
        cin>>x;
        if (fmod(x,1)!=0)
        {
            cout<<"nota invalida"<<'\n';
            continue;
        }
        cin>>y;
        if (fmod(y,1)!=0)
        {
            cout<<"nota invalida"<<'\n';
            continue;
        }
        if(fmod(x,1)==0 && fmod(y,1)==0)
        {
            cout<<"media = "<<(x+y)/2<<'\n';
            count++;
        }
        if (count==1)
        {
            break;
        }
        
        
        
    }
    return 0;
    
}