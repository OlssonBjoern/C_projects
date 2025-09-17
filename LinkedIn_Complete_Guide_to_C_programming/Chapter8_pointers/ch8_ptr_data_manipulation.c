#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Declaring pointers */

    /* USE CASES FOR POINTERS */

    // 1: Pointer represents the MEMORY LOCATION

    // 2: With the asterisk * prefix, the pointer represents the data stored at that location.
    //    Called "dereferencing"

    int alpha = 99;
    int *ptr;
    ptr = &alpha;

    printf("The ADDRESS of the data alpha is: %p\n\n", &alpha);
    printf("The VALUE STORED in the pointer ptr is, which is the memory location same as above: %p\n\n", ptr);
    printf("Alphas integer value: %d\n\n", alpha);
    printf("The content of the address that pointer points at: %d\n\n", *ptr);

    // Changing the value of the pointer
    *ptr = 66;
    //Outputting new value of alpha that pointer changed
    printf("Alpha: %d", alpha);

    return 0;
}

