#include <stdio.h>

// "if"  "else if"

int main(){

    int age;
    printf("Entre age : ");
    scanf("%d", &age);

    if(age < 18 ){
        printf("kid");
    }
    else{
        printf("Okay bro");
    }

    return 0;
}