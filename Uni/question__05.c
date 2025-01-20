#include <stdio.h>

// Explain the dangling else problem in c with a proper example to support your answer

int main()
{
    int x = 5;
    int y = 10;

    if (x > 0)
        if (y > 0)
            printf("x and y are positive\n");
        else
            printf("x is non-positive\n");

    return 0;
}
