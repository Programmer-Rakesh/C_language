#include <stdio.h>

int main(){
    // Print the numbers forom 0 to n, if n is given by user
    // n = 4

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int i=0;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }

    return 0;
}