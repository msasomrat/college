#include<stdio.h>

int main(){
    int a,b,c,i,j,temp;
    int arr[3];
    
    scanf("%d %d %d", &a, &b, &c);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                    if(arr[i] < arr[j]){
                            temp = arr[j];
                            arr[j] = arr[i];
                            arr[i] = temp;
                    }
            }
    }
    
    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
