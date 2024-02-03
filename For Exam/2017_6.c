#include <stdio.h> 
void call_by_reference(int *y);

int main() {

int b=10;

printf("b=%d before function call \n", b);

call_by_reference(&b);

printf("b=%d after function \n", b);

return 0;

} 
void call_by_reference(int *y) {

printf("y=%d before adding 10.\n", *y); (*y) += 10;

printf("y=%d after adding 10.\n", *y);
}