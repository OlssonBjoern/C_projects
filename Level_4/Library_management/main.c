// Driver file where the library is implemented 

#include <stdio.h>
#include <string.h>
#include "book_lenders.c"
#include "books.c"

int main() {

    struct Book_lender l1 = {1, 3, "Bjorn", "Olsson"};
    struct Book_lender l2 = {2, 4, "Test", "Testsson"};

    add_lender(l1);
    add_lender(l2);

    return 0;
}