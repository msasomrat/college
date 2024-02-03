#include<stdio.h>
int array1(int n, int size)
{
   int i, arr[n];
   int *ptr;
 
   ptr = &arr[0];
 
 
   printf("\nEnter %d integers into array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }
 
   ptr = &arr[size - 1];
 
   printf("\nElements of array in reverse order are :");
 
   for (i = size - 1; i >= 0; i--) {
      printf("%d ", *ptr);
      ptr--;
   }
 
  
}
int main()
{
    int a=50,size;
    printf("\nEnter the size of array : ");
    scanf("%d", &size);

    array1(a,size);

}