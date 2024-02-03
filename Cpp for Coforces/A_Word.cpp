#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr; 
    int count1=0, count2=0;
    cin>>arr;
    for (int i = 0; i < arr.size(); i++)
    {
        if ( arr[i] >= 'a' && arr[i]<= 'z')
        {
            count1++;
        }
        if ( arr[i] >= 'A' && arr[i]<= 'Z')
        {
            count2++;
        }
        
    }
    if (count1 > count2)
    {
        transform(arr.begin(), arr.end(), arr.begin(), ::tolower);
        cout << arr << endl;
    }
    if (count1 < count2)
    {
        transform(arr.begin(), arr.end(), arr.begin(), ::toupper);
        cout << arr << endl;
    }
    if (count1 == count2)
    {
        transform(arr.begin(), arr.end(), arr.begin(), ::tolower);
        cout << arr << endl;
    }

    
    
    return 0;
}