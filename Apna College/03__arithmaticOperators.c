#include <stdio.h>
#include <math.h>

// "+"  "-"  "/"  "*"  "%"

int main(){

    // Operator 
    int b, c;
    b = c = 1;
    int a = b + c;
    int power = pow(b, c);
    printf("%d", power);  // will print 1 

    // Modulo operator 
    printf("%d \n, 16%10");  // Will print remainder "6"
    printf("%d \n", -8%3);   // Will print remainder in negative


    // Type conversion
    // iint op int --> int
    // int op float --> float
    // float op float --> float

    printf("%f \n", 2.0 * 2);   // float resultant

    // Forcefully converting float into int :

    int q = (int) 1.9999;
    printf("%d \n", q);      // Will print "1"

    return 0;
}