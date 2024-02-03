#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n ){
    if(n == 1)return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i<=sqrt(n); i+= 2){
        if(n % i == 0)return false;
    }
    return true;
}
bool proceed(int x, int y)
{
    return x > y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a = 4 , b = n - 4 ;
    bool myVariable = true;
    while(myVariable){
        if(!is_prime(a) && !is_prime(b) && a + b == n){
            cout<< a << " " << b;
            myVariable = false;
        }else{
            a ++ , b--;
        }
    }
}