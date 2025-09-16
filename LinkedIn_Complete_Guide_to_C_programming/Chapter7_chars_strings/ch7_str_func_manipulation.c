#include <stdio.h>
#include <string.h>

int main()
{
    char rallyingCry[] = "Avengers assemble...or get over here as quickly as possible";
    int len;

    // Getting string length
    len = strlen(rallyingCry);

    printf("The rallying cry is %d characters long. \n", len);

    // String compare
    char password[] = "supersecretpassword\n";
    char input[30];

    printf("Type your useless password: ");
    fgets(input, 30, stdin);

    if (strcmp(password, input) == 0)
    {
        printf("Congratulations! You remembered your shitty password!");
    } else {
        printf("Womp, womp! Wrong password loser!");
    }
    

	return 0;
}