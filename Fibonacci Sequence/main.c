#include <stdio.h>
#include <stdlib.h>

int fibonacci(unsigned int n) {
    // If n is zero or one, return the number itself
    if (n <= 1) {
        return n;
    }
    // Recursive call to n-1 and n-2
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    unsigned int sum=0;
    for(int counter=0;counter <6;counter++){
        printf ("%i",fibonacci(counter));


    }

    for(int counter=0;counter <6;counter++){
        sum+=fibonacci(counter);


    }
    printf("\nsum = %i\n",sum);
    return 0;
}
