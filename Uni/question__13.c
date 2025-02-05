#include <stdio.h>

// Write a C program that implements a program to count the number of digits in a given integer using a do-while loop.

int main(){
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0){
        num = -num;
    }do{
        num /= 10; 
        count++;   
    } while (num != 0);

    printf("Number of digits: %d\n", count);

    return 0;
}
