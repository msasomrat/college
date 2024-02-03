#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[100],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0,j=n-1; i<j; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}
*/
void reverse_array(int arr[], int first, int last)
{
    if(first>=last)
        return;
    int temp= arr[first];
    arr[first]= arr[last];
    arr[last]= temp;

    reverse_array(arr, first+1, last-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[100], n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}