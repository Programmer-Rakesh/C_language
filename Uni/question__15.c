#include <stdio.h>

// Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.

int main(){
    int limit, sum = 0, num = 2; 
    printf("Enter the limit: ");
    scanf("%d", &limit);

    while (num <= limit){
        sum += (num * num * num); 
        num += 2;                 
    }
    printf("Sum of cubes of even numbers up to %d is: %d\n", limit, sum);

    return 0;
}
