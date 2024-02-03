#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int x,y,z,a,b;
    cin>> x >>y >> z;
    if (x%z==0)
    {
        a= x/z;
    }
    else
    {
        a=x/z+1;
    }
    if (y%z==0)
    {
        b= y/z;
    }
    else
    {
        b=y/z+1;
    }
    cout<< a*b << endl;
    
    return 0;
}
