#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare constant ratio equal to 3/4
    const float ratio = 3.0/4.0;

	//declare char a
    //assign char
    char a = 'a';

	//declare integer b
    //assign integer
    int b = 28;

	//declare float c
    //assign float
    float c = 3.14;
	

	//output char value, e.g., "the value of variable a is '?'"
    printf("the value of variable a is %c\n",a);

	//output integer value, e.g., "the value of variable b is ??"
    printf("the value of variable b is %d\n", b);
	//output float value, e.g., "the value of variable c is ???.??"
    printf("the value of variable c is %f\n",c);
	//output value of ratio, e.g., "the value of constant ratio is ???.??"
    printf("the value of constant ratio is %f\n", (float)ratio);

	return 0;
}