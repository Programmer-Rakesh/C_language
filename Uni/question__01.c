#include <stdio.h>

// Factorial of a number :

int main(){
    int n;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}
