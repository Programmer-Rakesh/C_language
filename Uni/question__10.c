#include <stdio.h>

// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20 %, DA = 80 % 
// Basic Salary <= 20000 : HRA = 25 %, DA = 90 % 
// Basic Salary > 20000 : HRA = 30 %, DA = 95 %

int main(){
    int basicsalary, HRA, DA;

    printf("Enter the basic salaray : ");\
    scanf("%f", &basicsalary);

    if(basicsalary <= 10000){
        HRA = basicsalary * 0.20;
        DA = basicsalary * 0.80;
    }else if(basicsalary <= 20000){
        HRA = basicsalary * 0.25;
        DA = basicsalary * 0.90;
    }else{
        HRA = basicsalary * 0.30;
        DA = basicsalary * 0.95;
    }

    printf("Total salary : %2f\n", basicsalary + HRA + DA);

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
}