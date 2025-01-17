#include <stdio.h>
#include <string.h>


// WAP to store the data of 3 students.

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 1663;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Rakesh");

    printf("Student name = %s\n", s1.name);
    printf("Student roll no. = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);


    struct student s2;
    s2.roll = 6723;
    s2.cgpa = 6.2;
    strcpy(s2.name, "Ronit");

    printf("Student name = %s\n", s2.name);
    printf("Student roll no. = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);


    struct student s3;
    s3.roll = 5676;
    s3.cgpa = 5.1;
    strcpy(s3.name, "Aman");

    printf("Student name = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);


    return 0;
}