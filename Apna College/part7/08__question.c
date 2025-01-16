#include <stdio.h>

// Write a fuction to count the number of odd numbers in an array.

int countDown(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d  ", countDown(arr, 6));

    return 0;
}

int countDown(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }

    return count;
}


//
int arr[] = {1, 2, 3, 4, 5};
// For the given array, what will be the following give?
// a) *(arr+2)
// b) *(arr+5)

// Ans a) 3
// Ans b) 0  ,  cuz there's no element after that



// Write a function to reverse an array;