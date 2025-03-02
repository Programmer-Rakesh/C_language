#include <stdio.h>

// * -> value at adress
// & -> address of operator 

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    // Value stored at the address of a pointer :
    printf("%d\n", _age);      
    printf("%d\n", *ptr); 
    printf("%d\n", *(&age)); 
    
    // adddress of the pointer : 
    printf("%d\n", &ptr); 

    // address in which "22" is stored : 
    printf("%d\n", ptr);      
    printf("%d\n", &age); 

    return 0;
}