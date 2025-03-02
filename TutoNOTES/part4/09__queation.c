// WAP to print the sum of first n Natural Numbers, Also print them in reverse.

#include <stdio.h>

int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("sum is %d\n", sum);

    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }

    return 0;
}



// We can write this in single for loop :

int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++, j--){
        sum += j;
        printf("%d\n", j);
    }
    printf("sum is %d\n", sum);

    return 0;
}

// WAP to table of a number input by the user.

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }

    return 0;
}