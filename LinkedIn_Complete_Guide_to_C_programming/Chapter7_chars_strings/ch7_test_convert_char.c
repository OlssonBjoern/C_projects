#include <stdio.h>
#include <ctype.h>

int main()
{
    // Testing a string to 

    char stringToTest[] = "NATO is an international organization! 123";

    char ch;
    int x = 0;

    // Goes through the string one character at a time
    // A single character is taken from the string and is stored in ch

    while ((ch = stringToTest[x]) != '\0')
    {
        // isalpha checks if the letter is part of the alphabet
        // If it is it outputs _ else it outputs the character
        if (isupper(ch)) {
            putchar('_');
        } else {
            putchar(ch);
        }
        x++;
    }

    printf("\n");
    //Converting a string to lower case
    x = 0;
    while ( (ch = stringToTest[x]) != '\0' )
    {
        putchar(tolower(ch));
        x++;
        
    }
    
    


    return 0;
}
