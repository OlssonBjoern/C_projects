#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here
char *get_input(int size) {

    char *a;
    int x = 0; // Works as offset

    /* Allocate storage */
    a = malloc(sizeof(char) * size);
    if (a == NULL) {
        puts("Unable to allocate memory");
        exit(1);
    }
    
    /* Read input */
    fgets(a, size,stdin);

    // Using pointer notation
    while (*(a+x) != '\0') {
        // If the value (a character) at pointer is the newline, remove it with the end of line instead.
        if (*(a+x) == '\n') {
           *(a+x) = '\0'; 
           break;
        }
        x++;
    }
    
    return(a);

}


int main()
{
	char *your_name,*your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n",your_name,your_city);

    free(your_name);
    free(your_city);

	return 0;
}