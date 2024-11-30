#include <stdio.h>


int Add(int i, int j, int k){
    return i + j + k;
}
int main(){
    int arr[4]= {2,3,4,5};
    int d = Add( arr[1], arr[2], arr[3]);

    printf("%d", d);

    return 0;
}