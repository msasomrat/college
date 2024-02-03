#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0, sum2=0;
    string arr, arr1;
    cin>>arr>>arr1;
    for (int i = 0; i !='\0'; i++)
    {
        if ((int)tolower(arr[i]) == (int)tolower(arr1[i]))
        {
            sum=0;
        }
        if ((int)tolower(arr[i]) < (int)tolower(arr1[i]))
        {
            sum=-1;
        }
        if ((int)tolower(arr[i]) > (int)tolower(arr1[i]))
        {
            sum=1;
        }
        
        
    }
    
   /*for (int i = 0; i < strlen(arr); i++)
   {
       sum +=(int)tolower(arr[i]);
   }
   for (int i = 0; i < strlen(arr1); i++)
   {
       sum2 +=(int)tolower(arr1[i]);
   }
   if (sum == sum2)
   {
       cout<<"0"<<endl;
   }
   if (sum < sum2)
   {
       cout<<"-1"<<endl;
   }
   if (sum > sum2)
   {
       cout<<"1"<<endl;
   }
   */
   
    cout<<sum;
}