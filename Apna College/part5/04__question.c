#include <stdio.h>
#include <math.h>


// WAP to print table.

void printTable(int n);

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printTable(n);   // argument / actual parameter

    return 0;
}

void printTable(int n){           // parameter / formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", i * n);
    }
}

// Difference betwen argument and parameter.

// WAP to print the amount after adding the gst

void calculatePrice(int value);

int main(){
    float value = 100.0;
    calculatePrice(value);

    return 0;
}
void calculatePrice(int value) {
    value = value + (0.18 * value);
    printf("Final price is : %f", value);
}


// Use library functions to calculate the square of a number given by user.

int main(){
    int n = 4;
    printf("%f", pow(n, 2));

    return 0;
}


// Write a function to calculate area of a square, a circle & a rectangle.


float squareArea(float side);
float circleArea(float radius);

int main(){
    float side;
    printf("Enter the side : ");
    scanf("%f", &side);
    printf("Area of the square : %f \n", squareArea(side));
    
    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float radius){
    return 3.14 * radius * radius;
}