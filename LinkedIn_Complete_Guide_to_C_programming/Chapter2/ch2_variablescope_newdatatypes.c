#include <stdio.h>
#include <time.h>


// Practicing input/output

int main()
{
    
    // Three type of variable scope
    // Auto = local to where the variable is being used
    // Static = Variables value will be kept efter the function is executed
    // Extern = Makes variables global

    // time_t = Unix epoch time
    // time_t is defined by typedef keyword
    // Format: typedef data_type new_definition
    // Example: typedef long unsigned time_t
    // typedef is used to keep data types constant between systems
    time_t now;

    time(&now);

    printf("%s", ctime(&now));

    // Example of typedef
    typedef float radius;

    radius a;

    a = 27.5;

    printf("\nA circle with the radius %.2f has an area of %.2f\n", a, a*a*3.1415926);


    return 0;
}