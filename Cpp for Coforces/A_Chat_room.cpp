#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string str;
    cin>>str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'h')
        {
            int temp= i;
            for (int j = temp; i < str.size(); j++)
            {
                if (str[j] == 'e')
                {
                    int tmp= j;
                    for (int k = tmp; i < str.size(); k++)
                    {
                        if (str[k]== 'l')
                        {
                            int tm = k;
                            for (int z = tm; i < str.size(); z++)
                            {
                                if (str[z]== 'l')
                                {
                                    int t = z;
                                    for (int n = t; i < str.size(); n++)
                                    {
                                        if (str[n]== 'o')
                                        {
                                            count++;
                                        }
                                    
                                    }
                                }
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
            //count++;
        }
    }
        /*if ((str[i] == 'h' && str[i+1] == 'e'))
        {
            count++;
        }
        if ((str[i] == 'h' && str[i+1] == 'e'))
        {
            count++;
        }
        
    } */
    if (count == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}