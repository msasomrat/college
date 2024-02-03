#include<stdio.h>
int main()
{
    int N,c1=0,c2=0;
    int arr[N];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>=10 && arr[i]<=20)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        

    }
    printf("%d in\n", c1);
    printf("%d our\n", c2);
    return 0;
}