#include <stdio.h>
#include <string.h>

// Manipulating with pointers

int main(int argc, char const *argv[])
{
    /* code */

    char mantra[] = "Pointers don't scare me!";
    char *ptr;

    ptr = mantra; // Initialize pointer to the array

    *(ptr+4) = 'i';
    *(ptr+3) = 'i';

    for (int i = 0; i < 29; i++)
    {
        if (*(ptr+i) == '\0')
        {
            break;
        }
        
        printf("%c", *(ptr+i));
    }
    

    // Print array with pointer math
    //printf("Seeing if specific values has changes in the string: '%s'\n\n", mantra);

    
    return 0;
}
