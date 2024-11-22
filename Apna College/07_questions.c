#include <stdio.h>
#include <math.h>

int main(){

    // Check weather a number is divisible by 2 :
    int x;
    printf("Entre your number");
    scanf("%d", &x);
    printf("%d", x % 2 ==0); // Will print 1 if your number is divisible by 2 and 0 if not.


    // Print 1(true) if the number is >9 & <100;

    int a;
    printf("Enter your number : ");
    scanf("%d", &a);
    printf("%d \n", a>9 && a<100);
    return 0;
}