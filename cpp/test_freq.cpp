#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    
        int arr1[N] = {0};
		//for (int i = 0; i < N; i++)
		//{
			//arr1[i]=0;
		//}
		for (int i = 0; i < N; i++)
		{
			if(arr[i]<=N){arr1[arr[i]-1]++;}
		}
		for (int i = 0; i < N; i++)
		{
			arr[i]=arr1[i];
		}


    return 0;
}
