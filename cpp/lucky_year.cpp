#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, count=0;
    cin>>n;
    while (1)
    {
        m=++n;
        string temp_str=to_string(m);
        for (int i = 0; i < 5; i++)
        {
            for (int j = 1; j!=i && j< 5 ; j++)
            {
                if (temp_str[i]== temp_str[j])
                {
                    count++;
                }
            }
            
            
            
        }
        if(count==0)
        {
            break;
        }
        else
        {
            count =0;
            continue;
        }
        
        
        
        
        
    }
    
   cout<<m; 
   return 0;
 
}