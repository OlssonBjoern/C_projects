#include <stdio.h>


// Practicing input/output

int main()
{
    
    // C has no string or text data type, an array of characters works as a string
    
    // Create an empty array of 32 characters 
    char buffer[32];

    printf("Type your name: ");

    // Reads characters from standard input referenced by the constant stdin
    // and then stores up to 32 characters in the buffer array
    fgets(buffer, 32,stdin);

    printf("Hello, %s", buffer);


    return 0;
}
