#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0, sum2=0,a ;
    char arr[100], arr1[100];
    cin>>arr>>arr1;
    for (int i = 0; i < strlen(arr); i++)
    {
        if ((int)tolower(arr[i]) == (int)tolower(arr1[i]))
        {
            sum=0;
        }
        else
        {
            a=i;
            goto overflow;
        }
        
        
        
    }
    overflow:
   if ((int)tolower(arr[a]) < (int)tolower(arr1[a]))
        {
            sum=-1;
        }
    if ((int)tolower(arr[a]) > (int)tolower(arr1[a]))
        {
            sum=1;
        }
        cout<<sum;
}