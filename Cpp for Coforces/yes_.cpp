#include<bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long int
#define mod 1e9+7

#define vi vector<int>
#define vs vector<string>
#define pi pair<int, int>

#define f0(i,n)  for(int i = 0; i<n; i++)
#define lcm(a,b) (a * b) / gcd(a, b)
int Ceil(int a, int b) { return a/b+(a%b != 0); }

void sol()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++)
            if(s[i]>='a' && s[i]<='z')
                s[i] = s[i]-32;
                
        if(s == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main(){
    FastIO;
    sol();
    return 0;
}