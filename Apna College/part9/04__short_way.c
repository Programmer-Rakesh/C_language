#include <stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {6543, 6.5, "Rakesh"};
    printf("Student roll = %d\n", s1.roll);

    return 0;
}