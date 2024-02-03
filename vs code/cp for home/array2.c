#include<stdio.h>
int main()
{
    int arr1[20],i,j,arr[10]={1,2,3,4,5,6,7,8,9,10};
    for ( i = 0,j=9; i < 10; i++,j--)
    {
        arr1[j]=arr[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
 

{
int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int i, j, temp;
    
    for(i = 0, j = 9; i < 10; i++, j--) {
    temp = ara[j];
    ara[j] = ara[i];
    ara[i] = temp;
}
for(i = 0; i < 10; i++) {
printf("%d\n", ara[i]);
}

}
}