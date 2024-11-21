#include <stdio.h>

int main(){
   int num, factorial = 1;

   printf("Entre a number: ");
   scanf("%d", &num);

   for (int i = 1; i <= num; i++){
    factorial *= i;
   } 

   printf("Factoria of %d is %d\n", num, factorial);

   return 0;
}