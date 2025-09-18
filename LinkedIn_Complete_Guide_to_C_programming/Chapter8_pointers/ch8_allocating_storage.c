#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    /*------ Working with structures and memory allocation --------*/
    /* MALLOC allocates new memory, ex. malloc(sizeof(char) * 128) */
    int x = 0;
    // Create struct of a person
    struct person {
        char firstname[32];
        char lastname[32];
        char superheroname[50];
        int age;
        int id;
    } *you; // When the entire structure is a pointer, member addressing changes.

    // Allocate memory for the structure
    you = malloc( sizeof(struct person) );
    // Check if memory actually can be freed
    if (you == NULL) {
        puts("Unable to allocate storage");
        exit(1);
    }
    
    // Because this structure is a pointer
    // It is needed to use structure pointer member operator to access members
    // The operator is ->
    printf("Enter your first name: ");
    fgets(you->firstname, 32, stdin);

    printf("Enter your last name: ");
    fgets(you->lastname, 32, stdin);

    printf("Enter your preferred superhero name: ");
    fgets(you->superheroname, 50, stdin);

    // Remove newline character
    while (you->firstname[x] != '\0') {
        if (you->firstname[x] == '\n') {
            you->firstname[x] = '\0';
            break;
        }
        x++;
    }
    x = 0;
    while (you->lastname[x] != '\0') {
        if (you->lastname[x] == '\n') {
            you->lastname[x] = '\0';
            break;
        }
        x++;
    }    
    x = 0;
    while (you->superheroname[x] != '\0') {
        if (you->superheroname[x] == '\n') {
            you->superheroname[x] = '\0';
            break;
        }
        x++;
    }

    printf("Enter your age: ");
    scanf("%d", &you->age);

    printf("Enter your ID: ");
    scanf("%d", &you->id);

    printf("Nice! Thank you for your input, your future superhero name is especially cool %s!\n", you->superheroname);
    printf("Hope your age of %d, and ID: %d is correct %s, otherwise we will get back to you! \n", you->age, you->id, you->firstname);

    free(you);

    return 0;
}
