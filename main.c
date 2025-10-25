#include <stdio.h>
#include "sum.h"
#include "difference.h"
#include "product.h"

int main() {
    	int a; 
	int b;
	printf("Enter first number: ");
	scanf("%d", &a);	
	printf("Enter second number: ");
	scanf("%d", &b);
	
	int r1 = add(a, b); 
    	printf("The sum is: %d\n", r1);

	int r2 = sub(a, b); 
    	printf("The sum is: %d\n", r2);

	int r3 = mul(a, b); 
    	printf("The sum is: %d\n", r3);

	return 0;

}
  
