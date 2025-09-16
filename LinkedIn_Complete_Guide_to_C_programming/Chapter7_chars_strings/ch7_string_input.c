#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Create string
    char nameString[10];
    int i;

    printf("Type your name: ");

    // fgets ends with a newline character, to remove it a for loop is needed
    fgets(nameString, 10, stdin);

    for (i = 0; i < 10; i++)
    {
        if (nameString[i] == '\n')
        {
            nameString[i] = '\0';
        }
        
    }
    

    printf("Pleased to meet you %s!\n", nameString);

    return 0;
}
