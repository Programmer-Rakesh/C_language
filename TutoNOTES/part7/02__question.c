#include <stdio.h>

// WAP to enter price of 3 items & print their final cost with gst.

int main(){

    float price[3];
    printf("Enter 3 prices : \n");

    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("total price 1 : %f\n", price[0] + (0.18*price[0]));
    printf("total price 2 : %f\n", price[0] + (0.18*price[1]));
    printf("total price 3 : %f\n7", price[0] + (0.18*price[2]));

    return 0;
}

