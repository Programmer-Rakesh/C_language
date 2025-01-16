#include <stdio.h>


// Case - 1 for int : 
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr1 = %u\n", ptr); // This will print the address of age.
    ptr++;        // This will add 4 bytes to the address
    printf("ptr2 = %u\n", ptr);

    return 0;
}

// Case - 2 for float : 
// Address here also increases by 4 bytes
 
// Case - 3 for chr : 
// Address here incresases by 1 byte 