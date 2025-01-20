#include <stdio.h>

int main(){
    int matrix1[3][3] = {{1,2,3}, {2,3,4}, {3,4,5}};
    int matrix2[3][3] = {{4,5,6}, {5,6,7}, {6,7,8}};
    int sum[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the matrix: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}