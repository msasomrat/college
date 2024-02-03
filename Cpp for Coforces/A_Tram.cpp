#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max;
    int arr1[n], arr2[n], arr3[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    arr3[-1]= 0 ;
    for (int i = 0; i < n; i++)
    {
    
       arr3[i] =arr3[i-1]+ (arr2[i] - arr1[i]);
       //cout<<arr3[i];
              
    }
    if (arr3[n-2]==arr1[n-1])
    {
        max=arr3[0];
        for (int i = 0; i < n; i++)
        {
           
            if (arr3[i]>max)
            {
                max= arr3[i];
            }
            
            
        }
        
    }
    
   cout<<max<<endl; 
}