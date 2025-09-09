// File with the basic struct and method for handling users
#include <stdio.h>
#include <string.h>


#define MAX_LENDERS 50

struct Book_lender {
    int lender_id;
    int books_loaned;
    char first_name[100];
    char last_name[100];
};

// Extern to make declaration visible outside of this file
// Tells the compiler "there exists an array of users"


// Functions for interacting with the lenders

void add_lender(struct Book_lender lender) {
    
    // Create file pointer and open file to write in
    // In this case, appending to the file to not overwrite existing information
    FILE *f = fopen("lenders.txt", "a");

    // Check that the file exists
    if (f == NULL) {

        perror("Could not open the file");
        return;

    }
    
    // Search file for duplicate user by name

    // Write to file
    // int fprintf(FILE *stream, const char *format, ...);
    fprintf(f, "%d %d %s %s\n", 
        lender.lender_id,
        lender.books_loaned,
        lender.first_name,
        lender.last_name);

    //Close file
    fclose(f);


}
//Book_lender* find_user(int id);
//void print_user();
