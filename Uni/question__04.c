#include <stdio.h>

// 	Write a program to find whether a number is a prime number or not

int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    if(n <= 1){
        printf("Not a prime number\n");
    } else if(n % 3 == 0 && n != 3){
        printf("No\n");
    } else if(n % 5 == 0 && n != 5){
        printf("No\n");
    }else if(n % 2 == 0){
        printf("No\n");
    }else{
        printf("prime\n");
    }

    return 0;
}

