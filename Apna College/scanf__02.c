#include <stdio.h>

int main(){
    int age;
    printf("Entre your age : ");
    scanf("%d", &age);
    printf("age : %d \n", age);


    // Sum of two numbers :

    int a, b;
    printf("Entre a : ");
    scanf("%d", &a);

    printf("Entre b : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum : %d \n", sum);


    // Area of Square :

    int side;
    printf("Entre side : ");
    scanf("%d", &side);
    printf("Area of the square : %d", side * side);

    return 0;
}