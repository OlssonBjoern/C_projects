#include <stdio.h>

int main()
{
    char productname[] = "Flap steak";
    int amount = 3;
    float price = 12.59;

    printf("You have purchased %d %ss. The total cost is: $%.2f", amount, productname, amount*price);

	return 0;
}