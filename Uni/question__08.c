#include <stdio.h>

// 	Write a program in C to display the multiplication table for a given integer.

int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i=0; i<=10; i++){
        printf("%d\n", n*i);
    }

    return 0;
}