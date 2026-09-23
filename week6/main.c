#include <stdio.h>


int main() {

////A. EMPLOYEE SALARIES
    //Variables
 double salaries[50];
 double totalSalary = 0;
 double averageSalary = 0;
 double highestSalary=0;
 double lowestSalary=0;
 double searchSalary=0;
 int salaryFound=0;

 ///B. Variables

 double budgets[10];
 double totalBudget =0;
 double averageBudget=0;
 double temp;

 ///C. VARIABLES
 char registrations[20][20];
 char searchRegistration[20];
int registrationFound = 0;

 //Capture 50 Salaries
 printf("=== EMPLOYEE SALARIES ===\n");

 for (int i = 0; i < 50; i++) {
    printf("Enter salary for employee %d: ", i + 1);
    scanf("%lf", &salaries[i]);
 }

 // Display all salaries
 printf("\n--- All Employee Salaries ---\n");
 for (int i = 0; i < 50; i++) {

    printf("Employee %d: %.2f\n", i + 1, salaries[i]);

}

/// Calculate Total Salary
for (int i = 0; i < 50; i++) {

    totalSalary = totalSalary + salaries[i];
}

///Calculate average Salary
averageSalary = totalSalary / 50;

// set first salary as highest and lowest
highestSalary = salaries[0];
lowestSalary = salaries[0];

//// Finding highest and lowest Salary
for (int i = 1; i < 50; i++) {

      if (salaries[i] > highestSalary){

        highestSalary = salaries[i];
    }

if (salaries[i] < lowestSalary){

    lowestSalary = salaries [i];

  }
}

//DISPLAY SALARY RESULTS
printf("\n--- Salary Results ---\n");
printf("Total salary: %.2f\n", totalSalary); 
printf("Average salary: %.2f\n", averageSalary);
printf("Highest salary: %.2f\n", highestSalary);
printf("Lowest salary: %.2f\n", lowestSalary);

// SEARCH FOR A SALARY
printf("\nEnter a salary to search for: ");
scanf("%lf", &searchSalary);
for (int i = 0; i < 50; i++){

    if (salaries[i] == searchSalary){

printf("Salary %.2f found for employee %d.\n",searchSalary, i + 1);
        
     salaryFound = 1;
    }
}

if (salaryFound == 0)
{

printf("Salary %.2f was not found.\n", searchSalary);

}

///// B. DEPARTMENT BUDGETS
printf("\n\n===== DEPARTMENT BUDGETS =====\n");

///CAPTURE 10 DEPARTMENT BUDGETS

for (int i = 0; i < 10; i++){

printf("Enter budget for department %d: ", i + 1);
scanf("%lf", &budgets[i]);

}

///DISPLAY BUDGETS

printf("\n--- Department Budgets ---\n");

for (int i = 0; i < 10; i++) {

    printf("Department %d: %.2f\n", i + 1, budgets[i]);
}

////CALCULATE TOTAL BUDGET

for (int i = 0; i < 10; i++) {

totalBudget = totalBudget + budgets[i];

}

/// CALCULATE AVERAGE BUDGET
averageBudget = totalBudget / 10;

///DISPLAY BUDGET RESULTS
printf("\n--- Budget Results ---\n");
printf("Total budget: %.2f\n", totalBudget);
printf("Average budget: %.2f\n", averageBudget);

///SORT BUDGETS FROM LOWEST TO HIGHEST
for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9 - i; j++) {
        if (budgets[j] > budgets[j + 1]){
            temp = budgets[j];
            budgets[j] = budgets[j + 1];
            budgets[j + 1] = temp;
        }
    }
}

///DISPLAY SORTED BUDGETS
printf("\n--- Budgets From Lowest to Highest ---\n");

for (int i = 0; i < 10; i++) {

    printf("%.2f\n", budgets[i]);
}

////C. VEHICLE REGISTRATION NUMBERS

printf("\n\n===== VEHICLE REGISTRATIONS =====\n");

// Capture 20 registration numbers
for (int i = 0; i < 20; i++) {

printf("Enter registration number %d: ", i + 1);
scanf("%19s", registrations[i]);

}

// Display all registration numbers

printf("\n--- All Registration Numbers ---\n");

for (int i = 0; i < 20; i++) {

    printf("Vehicle %d: %s\n", i + 1, registrations[i]);

}

//SEARCH FOR REGISTRATION NUMBER

printf("\nEnter a registration number to search for: ");
scanf("%19s", searchRegistration);

for (int i = 0; i < 20; i++) {

int same = 1;

for (int j = 0; j < 20; j++) {

if (registrations[i][j] != searchRegistration[j]){ 
same = 0;

break;

}

if (registrations[i][j] == '\0') {

  break;

 }

}
  if (same == 1) {

    printf("Registration number %s found for vehicle %d.\n",searchRegistration, i + 1);

    registrationFound = 1;

  }
}

if (registrationFound ==0) {
    printf("Registration number %s was not found. \n", searchRegistration);
}
    return 0;
}