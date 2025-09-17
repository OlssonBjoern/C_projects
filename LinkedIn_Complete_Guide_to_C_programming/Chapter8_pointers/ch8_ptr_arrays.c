#include <stdio.h>

// Manipulating with pointers

int main(int argc, char const *argv[])
{
    /* code */

    int twos[5] = {2, 4, 6, 8, 10};
    int *ptr;

    ptr = twos; // Initialize pointer to the array

    // Print array with pointer math
    printf("%d\n", *(ptr + 0));
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", *(ptr + 4));

    
    return 0;
}
