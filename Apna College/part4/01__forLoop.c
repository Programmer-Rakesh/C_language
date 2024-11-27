#include <stdio.h>

int main(){
    for(int i=1; i<=10; i=i+1){       // Will print "Hello World" 10 times
        printf("Hello World  \n");
    }

    for(int p=1; p<=50; p=p+1){       // Will print numbers from 1 to 50
        printf("%d \n", p);
    }

    for(int q=10; q>=1; q=q-1){       // Will print numbers from 10 to 1
        printf("%d \n", q);
    }

    return 0;
}