#include <stdio.h>

// print all numbers from 1 to 10 except for 6.

int main(){
    for(int i=1; i<=10; i++){
        if(i == 6){
            continue;
        }
        printf("%d\n", i);
    }

   return 0;
}


//Print all the odd numbers from 5 to 50.

int main(){
    
    for(int i=5; i<=50; i++){
        if(i%2 == 0){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}




//  WAP to print factorial of n.

int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    printf("final factorial is %d", fact);

    return 0;
}


// Print reverse of the table for a number n.

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--){
        printf("%d\n", n * i);
    }

    return 0;
}


// WAP to calculate the sum of all numbers between 5 and 50.

int main(){
    int sum = 0;

    for(int i=5; i<=50; i++){
        sum += i;
    }

    printf("sum is  %d", sum);

    return 0;
}