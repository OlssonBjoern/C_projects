#include <stdio.h>
#include <stdlib.h>


#define FALSE 0
#define TRUE 1

int main()
{

	// variable declarations
	int done;
    int character;
	/* main program loop */
	done = FALSE;
	while(!done)
	{
		// prompt for input
        printf("Enter a command overlord: ");
        character = getchar();
		// process input
		// if R is input, output "move right"
		// if L is input, output "move left"
		// if B is input, output "move back"
		// if Q is input, break the loop
		// if H or ? is input, output valid commands
		// identify invalid input

        switch (character)
            {
        case 'R':
            printf("Moving right! \n");
            break;

        case 'L':
            printf("Moving left! \n");
            break;

        case 'B':
            printf("Moving back!\n");
            break;
        case 'Q':
            printf("Goodbye!\n");
            done = TRUE;
            break;
        case 'H' || '?':
            printf("Wtf?\n");
            break;
        default:
            printf("This is not a valid input, please try again!\n");
        }
        // This part is to remove the "shift" press when writing capital letters
        while ((character = getchar()) != '\n' )
        {
            ;
        }
        

	}
    
    return 0;
}
