#include <stdio.h>

int main()
{
    /* FOR LOOP */

    for (size_t i = 0; i < 5; i++)
    {
        printf("Writing i 5 times, count: %d\n", i+1);
    }
    

    /* WHILE LOOP */
    int w = 5;
    while (w > 0)
    {
        printf("Printing the countdown of w: %d\n", w);
        w--;
    }  

    // While loop with break condition
    int ch;

    printf("Type '!' to exit: ");

    while (1)
    {
        ch = getchar();
        if (ch == '!')
        {
            break;
        }
        
    }
    
    /* DO LOOP*/

    int b;

    printf("\nEnter value: ");
    scanf("%d", &b);

    do
    {
        puts("Here we go");
        b--;
    } while (b > 0);
    

    return 0;
}
