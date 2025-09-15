#include <stdio.h>
#include <string.h>

// NESTED Structs

int main()
{

    struct date {
        int year;
        int month;
        int day;
    }; 
    
    struct person {
        struct date birthday; // Nesting the date struct into the person struct
        char name[32];
    } hockeyplayer = { {1961, 1, 26}, "Wayne Gretzky"};
    // One alternative to declare: struct person hockeyplayer;

    hockeyplayer.birthday.day = 26;
    hockeyplayer.birthday.month = 1;
    hockeyplayer.birthday.year = 1961;
    strcpy(hockeyplayer.name, "Wayne Gretzky");

    printf("%s was born  the %d/%d in %d", hockeyplayer.name, hockeyplayer.birthday.day, hockeyplayer.birthday.month, hockeyplayer.birthday.year);
    
    return 0;
}
