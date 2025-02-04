#include <stdio.h>

// Case question

int main(){
    int ch;
    printf("Enter any one alphabet form A to Z : ");
    scanf("%c", &ch);

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("vovel");
        break;
        default:
        printf("Not a vovel");
        
    }

    return 0;
}