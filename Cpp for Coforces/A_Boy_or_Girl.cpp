#include<bits/stdc++.h>
using namespace std;

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


int main()
{
    
    char arr[100];
    int n,m=0,x;
    cin>>arr;
    n=strlen(arr)/arr[0];
    selection_sort(arr, n);
    /*
    for (int i = 0; arr[i]  !='\0'; i++)
    {
        cout<<arr[i];
        //n=i;
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

    //cout<<n<<endl;
    */
   //string arr;
   //cin>>arr;
   //int n=0;
   //sort(arr.begin(), arr.end());
   /*for (int i = 0; i< ; i++)
    {
       if (arr[i]!=arr[i+1])
       {
            n++;
       }
       
    for (int j = 0; arr[j] !='\0' && j!=i; j++)
        {
            if (arr[i]==arr[j])
            {
                continue;
            }
            
            if (arr[i]!=arr[j])
            {
                n++;
            }
            
        }
        if (n>0)
        {
            m++;   
        }
        
        //swap(&arr[min], &arr[i]);

    */   
   for (int j = 0; j<n; j++)
        
            if (arr[j]!=arr[j+1])
            {
                m++;
            }
            
               
    
    if (m%2==0)
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else
    {
        cout<<"IGNORE HIM!"<<"\n";
    }
    
}