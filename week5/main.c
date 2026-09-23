#include<stdio.h>
int main() {
    //Variables

 double salary= 0;
 double total = 0;
 double highest = 0;
 double lowest = 0;
 double average = 0;

    ///1.Capturing the salary of each employee
 for (int i = 1; i <= 50; i++) {

 printf("Enter salary for employee %d: ", i);
 scanf("%lf", &salary);

 //2.Calculation of total salary
 total = total + salary;

 //4.+5. Calculate the highest and lowest salary
 if (i == 1) {
 highest = salary;
 lowest = salary;
 }

 if (salary > highest) {
 highest = salary;
 }
 if (salary < lowest) {
 lowest = salary;
 }
}
//3.Calculate Average Salary

 average = total / 50;

 //6.Display Results
 printf("\n--- Salary Report ---\n");
 printf("Total salary: %.2f\n", total);
 printf("Average salary: %.2f\n", average);
 printf("Highest salary: %.2f\n", highest);
 printf("Lowest salary: %.2f\n", lowest);

    return 0;
}