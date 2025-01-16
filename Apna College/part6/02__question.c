#include <stdio.h>

int main(){

    int x;       // creating a variable
    int *ptr;    // creating a pointer

    ptr = &x;    // storing address of x in ptr
    *ptr = 0;    // storing 0 at the address of ptr

    // means we stored 0 at the address of x

    printf("x = %d\n", x);         // value of x
    printf("*ptr = %d\n", *ptr);   // Value at address of ptr

    *ptr += 5;   // means x += 5;
    // This added 5 to the value at address of ptr / or at x
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;    // means x + 1 which is now 5 + 1 = 6
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}