#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    for (int first = 0; first < s.size() ; first++)
    {
        if (s[first] == 'h')
        {
            int temp1 = first;
            for (int second = temp1+1; second < s.size(); second++)
            {
                if (s[second] == 'e')
                {
                    int temp2 = second;
                    for (int  third = temp2+1; third < s.size(); third++)
                    {
                        if (s[third] == 'l')
                        {
                            int temp3 = third;
                            for (int  fourth = temp3+1; fourth < s.size(); fourth++)
                            {
                                if (s[fourth] == 'l')
                                {
                                    int temp4 = fourth;
                                    for (int fifth = temp4+1; fifth < s.size(); fifth++)
                                    {
                                        if (s[fifth] == 'o')
                                        {
                                            count++;
                                            break;
                                        }
                                        
                                    }
                                   break; 
                                }
                                
                            }
                           break; 
                        }
                        
                    }
                   break; 
                }
                
            }
           break; 
        }
           
    }
    if (count==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}