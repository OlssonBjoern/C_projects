#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Reading from file */
    const char filename[] = "sonnet18.txt";
    FILE *fh;
    // To read from file it needs to use a char 
    int ch; 


    // Open the file
    fh = fopen(filename, "r");

    // If it fails to open the file it returns NULL
    if (fh == NULL) {
        printf("Unable to read from file %s\n", filename);
        return(1);
    }

    // fgetc reads the single characters from the filehandle fh
    // It has to an integer as the EOF (end of file) returns an integer 
    while (1) {
        ch = fgetc(fh);
        if (ch == EOF) {
            break;
        }
        putchar(ch);
    }
    

    // Clean up

    fclose(fh);

    return 0;
}
