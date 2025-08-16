#include <stdio.h>


int main() {

    int inputNum1, inputNum2, inputNum3;


    printf("Welcome to the super simple calculator! \n");
    printf("\nPlease input your first number:  \n");

    scanf("%d", &inputNum1);

    printf("\n\nGreat choice! Now please input your second number:  \n");

    scanf("%d", &inputNum2);

    printf("\n\nInteresting! Now please input your third number:  \n");

    scanf("%d", &inputNum3);


    printf("\nYour numbers chosen are: %d, %d, %d", inputNum1, inputNum2, inputNum3);

    return 0;

}