#include <stdio.h>
#include <string.h>

// Write a C program that prompts the user to enter a password. Use a do-while loop to keep asking for the password until the correct one is entered.

int main(){
    char password[20];
    char correctPassword[] = "1234"; 

    do{
        printf("Enter the password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0){
            printf("Access granted!\n");
            break; 
        }else{
            printf("Incorrect password. Try again.\n");
        }
    } while (1); 

    return 0;
}
