#include <stdio.h>
int main (){
    
    ///BUDGET CALCULATOR///
double revenue=0, expense=0, balance=0;
int departments=0;
double payroll=0, procurement=0, assets=0;

printf("MUNICIPAL BUDGET CALCULATOR\n");

printf("Enter Total Revenue Amount: ");
scanf("%lf", &revenue);

printf("Enter Total Expense: ");
scanf("%lf", &expense);

///Ext EXERCISE///

printf("Enter number of Departments:");
scanf("%d", &departments);

printf("Enter Paroll: ");
scanf("%lf", &payroll);

printf("Enter Procurement: ");
scanf("%lf", &procurement);

printf("Enter Assets: ");
scanf("%lf", &assets);

balance = revenue - expense;

printf("MUNICIPAL SUMMARY\n");
printf("----------------------------------------\n");

printf("Revenue: %.2f\n", revenue);
printf("Expense: %.2f\n", expense);
printf("Balance: %.2f\n", balance);
printf("Departments: %d\n", departments);
printf("Payroll: %.2f\n", payroll);
printf("Procurement: %.2f\n", procurement);
printf("Assets: %.2f\n", assets);

    return 0;

}