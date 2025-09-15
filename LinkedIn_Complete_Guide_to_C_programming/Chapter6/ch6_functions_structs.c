#include <stdio.h>
#include <string.h>

// Sctructures and functions

char *show_color(char c) {
    
    switch (c) {
    case 'r':
        return("red");
    case 'g':
        return("green");
    case 'b':
        return("blue");
    default:
        return("Invalid");
    }
}


int main()
{
    struct pixel {
        int horiz;
        int verti;
        char color;
    } center = {320, 240, 'r'};
    
    //Passing the function inside the arguments for printf
    printf("The pixel at %d, %d is colored: %s\n", center.verti, center.horiz, show_color(center.color));

    return(0);

}