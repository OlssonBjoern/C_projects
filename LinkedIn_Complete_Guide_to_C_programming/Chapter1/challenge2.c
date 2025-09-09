#include <stdio.h>

/* Find the errors in the file  */

int main()
{
	int a,b;

    // Missing single quotes
	printf("Type a positive value: ");
	scanf("%d",&b);
	for(a=0;a<b;a++)
	{
		printf("I must do this %d times\n",b);
		if(a==9) {
            break;
        }
			
	}

	return(0);
}