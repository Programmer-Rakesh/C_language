#include <stdio.h>
#include <math.h>

//  Write a program to find whether a number is Armstrong number or not .

int main(){
    int n, sum = 0, temp, remainder, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp != 0){
        temp /= 10;
        digits++;
    }
    temp = n;
    
    while (temp != 0){
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    
    if (sum == n){
        printf("%d is an Armstrong number.\n", n);
    }else{
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
