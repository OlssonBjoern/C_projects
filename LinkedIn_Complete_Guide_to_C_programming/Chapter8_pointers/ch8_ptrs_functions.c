#include <stdio.h>

void three (float a, float *b, float *c) {

    *b = a/3.0;
    *c = a/7.0;

}

int main(int argc, char const *argv[]){ 
    
    float x, y;

    three(20, &x, &y);

    printf("20/3 = %.1f\n",x);
    printf("20/7 = %.1f",y);

    return 0;
}
