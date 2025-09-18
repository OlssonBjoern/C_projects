#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    
    // Creating an array of structure pointers
    struct data {
        int v;
        char c;
    } *alpha[26];
    // alpha here is a pointer to an array of 26 structures of the "data"-type
    int x;

    /* Allocate and assign the structures */

    for (x = 0; x < 26; x++) {
        alpha[x] = malloc( sizeof(struct data) );

        if (alpha[x] == NULL) {
            puts("Memory allocation error");
            exit(1);
        }
        //Structure pointer notation
        alpha[x]->v = x;
        alpha[x]->c = 'A' + x;
    }
    
    /* Output */
    for (x = 0; x < 26; x++) {
        printf("%d, %c\n", alpha[x]->v, alpha[x]->c);
    }
    
    // Cleanup section
    // Free memory
    for (x = 0; x < 26; x++) {
        free(alpha[x]);
    }
    
    
    return(0);
}