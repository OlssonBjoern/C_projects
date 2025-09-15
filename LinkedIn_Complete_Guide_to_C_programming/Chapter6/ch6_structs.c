#include <stdio.h>

// Working with structs

int main()
{

    struct pixel {
        int horiz;
        int vert;
        char color;
    }; // Alternative way is to write the "center" efter curly braces end and then declare more struct variables
    struct pixel center;

    center.color = 'r';
    center.horiz = 320;
    center.vert = 240;

    
    return 0;
}
