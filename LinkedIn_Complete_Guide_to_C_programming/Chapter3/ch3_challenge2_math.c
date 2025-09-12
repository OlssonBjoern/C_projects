#include <stdio.h>

int main()
{
    	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d",&a);
	scanf("%d",&b);

	// add
    printf("The result of addition is: %d\n", a+b);

	// subtract
    printf("The result of subtraction is: %d\n", a-b);
	// multiply
    printf("The result of multiplication is: %d\n", a*b);
	// divide
    printf("The result of division is: %f\n", (float)a/b);
	// modulus
    printf("The result of is: %d\n", a%b);
	// bit shift right
    printf("The result of bit shift right is: %d\n", a>>b);
	// bit shift left
    printf("The result of bit shift left is: %d\n", a<<b);
    return 0;
}
