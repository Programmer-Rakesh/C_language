// Write a C program to convert a decimal number to hexadecimal

#include <stdio.h>

void decimalToHex(int num){
    printf("Hexadecimal: %X\n", num); // %X prints the hexadecimal equivalent
}

int main(){
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decimalToHex(num);
    return 0;
}
