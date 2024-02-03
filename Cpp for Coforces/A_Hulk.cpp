#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=1;
    while (m<=n){
        if(m%2==0){
            cout<<"I love"<< " ";
        }
        else
            cout<<"I hate"<< " ";
        if(m==n){
            cout<<"it";
        }
        else
            cout<<"that"<<" ";
        m++;
        
    }
    
/*
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0){
            cout<<"I hate"<< " ";
        }
        else
            cout<<"I love"<< " ";
        if(i==n){
            cout<<"it";
        }
        else
            cout<<"that"<<" ";
    }
  */ 
 return 0; 
    
}