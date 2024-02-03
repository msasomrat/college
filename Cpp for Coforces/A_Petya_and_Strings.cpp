#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100], arr1[100];
    int sum;
    cin>>arr>>arr1;
    for (int i = 0; arr[i]  !='\0'; i++)
    {
        if (tolower(arr[i])==tolower(arr1[i]))
        {
            sum=0;
            continue;
        }
        if (tolower(arr[i])>tolower(arr1[i]))
        {
            sum = 1;
            break;
        }
        if (tolower(arr[i])<tolower(arr1[i]))
        {
            sum = -1;
            break;
        }
        
        
    
    }
    cout<<sum<<endl;
    
}