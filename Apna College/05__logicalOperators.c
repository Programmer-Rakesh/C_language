#include <stdio.h>
#include <math.h>

// "&&"  "||"  "!"

int main(){

    // Or operator ( || )
    printf("%d \n", 3>4  || 5>1 );   // will print 1


    // And operator ( && )
    printf("%d \n", 3>4 && 3>5 );  // Will print 0

    // Special case :
    printf("%d \n", !(3>4) && !(3>5) );  // Will print 1

    return 0;
}