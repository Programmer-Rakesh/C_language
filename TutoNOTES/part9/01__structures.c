#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1663;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Rakesh");


    printf("Student name = %s\n", s1.name);
    printf("Student roll no. = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

    return 0;
}