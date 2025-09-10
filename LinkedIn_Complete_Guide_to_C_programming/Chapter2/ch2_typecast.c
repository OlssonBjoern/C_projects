#include <stdio.h>

int main()
{
    /* code */

    int a = 100;
    int b = 7;

    // This will not give the correct answer since this is will output an integer only
    // This equals = 14
    printf("%d / %d = %d\n", a,b,a/b);

    // This will output 0.0000 
    printf("%d / %d = %f\n", a,b,a/b);

    // The solution is typecasting the result
    // The compiler needs to work with it as a real number
    // Typecasting lets the expression "pretend" to be another data type
    printf("%d / %d = %f\n", a,b,(float)a/b);

    return 0;
}
