// Driver file where the library is implemented 

#include <stdio.h>
#include <string.h>
#include "book_lenders.c"
#include "books.c"

int main() {

    struct Book_lender l1 = {1, 3, "Bjorn", "Olsson"};

    add_lender(l1);

    return 0;
}