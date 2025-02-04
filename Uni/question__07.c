#include <stdio.h>

// Write a program in C to read 10 numbers from the keyboard and find their sum and average.

int main(){
    int numbers[10];
    int sum = 0;
    float average;

    printf("Enter 10 numbers : ");

    for(int i=0; i<10; i++){
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 10;

    printf("sum : %d\n", sum);
    printf("Average : %d\n", average);

    return 0;
}