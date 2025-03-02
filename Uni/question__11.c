#include <stdio.h>

// Write a C program to convert a decimal number to hexadecimal

void decimalToHex(int num){
    printf("Hexadecimal: %X\n", num);
}

int main(){
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decimalToHex(num);
    return 0;
}
