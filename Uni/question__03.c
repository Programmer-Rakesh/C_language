#include <stdio.h>

// Write a C program to find and print the first 10 Fibonacci numbers using a while loop.

    int
    main()
{
    int n = 10; // First 10 Fibonacci numbers
    int first = 0, second = 1, next, count = 1;

    printf("First 10 Fibonacci numbers:\n");

    // Use a while loop to print the Fibonacci series
    while (count <= n)
    {
        if (count == 1)
        {
            printf("%d ", first);
        }
        else if (count == 2)
        {
            printf("%d ", second);
        }
        else
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        count++;
    }

    printf("\n");
    return 0;
}
