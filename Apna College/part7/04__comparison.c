#include <stdio.h>

// we use "%u" to print unsigned integers. Unsigned integers are non-negative numbers (0 and positive integers) that do not have a sign (+ or -).

int main(){
    int age1 = 22;
    int *ptr1 = &age1;

    int age2 = 23;
    int *ptr2 = &age2;

    printf("%u, %u \ndifference = %u", ptr1, ptr2, ptr1-ptr2);   // Here we have used %u two times. one for ptr1 and another for ptr2.

}

// you can use %d, but there's a key difference. The %d format specifier is used to print signed integers, which include both positive and negative numbers. If you use %d with an unsigned integer, it might not display the correct value, especially if the number is large.