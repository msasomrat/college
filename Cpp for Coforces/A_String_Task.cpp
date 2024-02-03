#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int sum;
    cin>>arr;
    for (int i = 0; arr[i]  !='\0'; i++)
    {
        if ((arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U'||arr[i]=='y'||arr[i]=='Y'))
        {
            continue;
        }
        
    else
    {
        cout<<"."<<(char)tolower(arr[i]);
    }
    }
    
    
}