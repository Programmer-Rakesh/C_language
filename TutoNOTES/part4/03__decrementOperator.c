#include <stdio.h>

int main()
{
    // decrement operator
    // --i (pre decrement)
    // i-- (post decrement)

    int i = 3;
    printf("%d \n", i--); 
    printf("%d \n", i);

    printf("%d \n", --i); 
    printf("%d \n", i);

    return 0;
}