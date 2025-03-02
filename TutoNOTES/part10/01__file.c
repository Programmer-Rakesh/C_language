#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("abc.txt", "w");

    if(file == NULL){
        printf("error");
        return 1;
    }
    fprintf(file, "hello");
    fclose(file);
}