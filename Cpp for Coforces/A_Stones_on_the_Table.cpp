#include<bits/stdc++.h>
using namespace std;
/*
void swap(char *x, char *y)
{
    int temp= *x;
    *x = *y;
    *y = temp;
}

void selection_sort(char arr[], int n)
{
    int min, i;
    for (int i = 0; i < n; i+=2)
    {
        min=i;
        for (int j = i; j < n; j+=2)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
            
        }
        swap(&arr[min], &arr[i]);
           
    }
    
}

*/
int main()
{
    int n, count=0;
    cin>>n;
    char arr[n];
    cin>>arr;
    //n=strlen(arr);
    //selection_sort(arr, n);
    for (int i = 0; arr[i]  !='\0'; i++)
    {
       // cout<<arr[i];
        //n=i;
        /*if (tolower(arr[i])==tolower(arr1[i]))
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
        */
       if (arr[i]==arr[i+1])
       {
        count++;
       }
       
        
    
    }
    cout<<count<<endl;
    
}