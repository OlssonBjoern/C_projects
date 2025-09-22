#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Using structs in a file and searching in that file */
    /* fseek() function is used */
    // Arguments:
    // 1 - File handle or, "stream"
    // 2 - Integer offset in the file
    // 3 - Whence, from where in the file the offset is measured
    //   3.a) --> SEEK_SET = Start of file 
    //   3.b) --> SEEK_CUR = From current file position indicator
    //   3.c) --> SEEK_END = from end of file

    const char filename[] = "heroes.dat";
    FILE *fp;

    struct marvel_hero {
        char real_name[32];
        char alter_ego[32];
        int first_appearance;
        char power[32];
    } heroes[8] = {
        {"Tony Stark", "Iron Man", 1962, "Super genius"},
        {"Bruce Banner", "The Hulk", 1962, "Super strength"},
        {"Thor Odinson", "Thor", 1962, "God of thunder"},
        {"Wade Wilson", "Deadpool", 1991, "Healing factor"},
        {"Steve Rogers", "Captain America", 1940, "Super soldier"},
        {"King T'Challa", "Black Panther", 1966, "Strength, speed, agility"},
        {"Peter Parker", "Spider-Man", 1962, "Strength, spider web, agility"},
        {"Clint Barton", "Hawkeye", 1964, "Aim, precision"},
    };

    /* Open the file */
    fp = fopen(filename, "w");
    if (fp == NULL) {

        printf("Unable to create %s\n",filename);
        return(1);
    }

    /* Write 8 structs */
    fwrite(heroes, sizeof(struct marvel_hero), 8, fp);
    
    fclose(fp);
    

    return 0;
}
