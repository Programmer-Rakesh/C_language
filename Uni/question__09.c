#include <stdio.h>

// Sum of two 3 by 3 Matrix

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

// Poduct of 2 matrix

int main(){
    int matrix1[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int matrix2[3][3] = {{4, 5, 6}, {5, 6, 7}, {6, 7, 8}};
    int product[3][3] = {0};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Transpose of a matrix

int main(){
    int matrix1[3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int transpose[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            transpose[j][i] = matrix1[i][j];
        }
    }

    printf("Transpose of the first matrix:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
