#include <stdio.h>

int main(){
    int x = 2;

    if(x=1){   // So there's only onw "=" so it will replace "x=2" by "x=1".
        printf("x is equal to 1");
    }else{
        printf("x is not equal to 1");
    }
}