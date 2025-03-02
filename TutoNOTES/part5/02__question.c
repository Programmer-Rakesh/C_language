#include <stdio.h>

// Write a function that prints Namaste if user is Indian & Bonjour if the user is French.

void Namaste();
void Bonjour();

int main(){
    printf("Enter I for Indian & F for French : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'I' || 'i'){
        Namaste();
    }else{
        Bonjour();
    }
    return 0;
}

void Namaste(){
    printf("Namaste");
}
void Bonjour(){
    printf("Bonjour");
}