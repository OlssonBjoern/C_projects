#include <stdio.h>

int main(int argc, char const *argv[])
{
    const char filename[] = "hello.txt";
    char name[16];
    char input[64];
    FILE *fh;

    /* Create the file */
    /* Mode = w to write*/
    fh = fopen(filename, "w");
    if (fh == NULL) {

        puts("Error creating file");
        return(1);
    }
    
    /* Prompt for user name */
    printf("Your name:  ");
    scanf("%s", name);

    /* Write to the file */
    fprintf(fh, "%s has written to the file\n", name);

    /* Close the file */
    fclose(fh);

    /* Create the file */
    /* Mode = w to write*/
    fh = fopen(filename, "r");
    if (fh == NULL) {

        puts("Error opening file");
        return(1);
    }

    /* Read the text */
    fgets(input, 64, fh);
    printf("The file '%s' contains the text: \n", filename);
    puts(input);

    /* close again */
    fclose(fh);

    return 0;
}
