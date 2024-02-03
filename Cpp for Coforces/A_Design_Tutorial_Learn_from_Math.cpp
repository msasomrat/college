#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if(n==1) return false;
    if(n==2|| n%2==0 || n%3 ==0)return false;
    for (int i = 5; i*i <=n; i +=6)
    {
        if(n%i ==0 || n%(i+2)== 0) return false;
    }
    return true;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a=4;
    int b=n-4;
    int flag = 1;
    while (flag)
    {
        if (!is_prime(a) && !is_prime(b) && a+b ==n)
        {
            cout<< a<< " " <<b<< endl;
            flag = 0;
        }
        else
        {
            a++;
            b--;
        }
        
    }
    
    return 0;

}