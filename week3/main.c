#include<stdio.h>
int main() {
    ///PART A///
    //Variables
    
 double basicSalary=0;
 double housing=0;
 double transport=0;
 double tax=0;
 double grossSalary=0;
 double netSalary=0;
   //User prompts
   printf("Enter basic salary: ");
 scanf("%lf", &basicSalary);

 printf("Enter housing allowance: ");
 scanf("%lf", &housing);

 printf("Enter transport allowance: ");
 scanf("%lf", &transport);

 printf("Enter tax: ");
 scanf("%lf", &tax);
 //Formula
 grossSalary = basicSalary + housing + transport;
 netSalary = grossSalary - tax;

 //Output
printf("\nGross Salary: %.2f\n", grossSalary);
 printf("Net Salary: %.2f\n", netSalary);

    return 0;
}