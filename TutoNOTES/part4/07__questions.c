#include <stdio.h>

int main(){
    // Print the numbers from 0 to n, if n is given by user

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int i=0;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }
    

    // WAP to print sum of n terms
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);

    int sum = 0;
    for (int j=1; j<=a; j++)
    {
        sum = sum + j;
    }

    printf("Sum is : %d \n ", sum);

    return 0;
}