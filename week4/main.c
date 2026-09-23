#include<stdio.h>
int main() {
    
    ///Variables
 char supplierName[50]="";
 double price=0;
 double budget=0;
 int registered=0;
 int documentsComplete=0;

 //User Prompts
 printf("Enter supplier name: ");
 scanf("%49s", &supplierName);

 printf("Enter tender price: ");
 scanf("%lf", &price);

 printf("Enter available budget: ");
 scanf("%lf", &budget);

 printf("Is supplier registered? (1=Yes, 0=No): ");
 scanf("%d", &registered);

 printf("Are all documents complete? (1=Yes, 0=No): ");
 scanf("%d", &documentsComplete);

 //Nested If Statement

 if (registered == 0 || documentsComplete == 0)
 {
 printf("\nSupplier: %s\n", supplierName);

 printf("Status: Disqualified\n");
 }
 else if (price > budget)
 {
 printf("\nSupplier: %s\n", supplierName);
 printf("Status: Disqualified\n");
 }
 else
 {
 printf("\nSupplier: %s\n", supplierName);
 printf("Status: Qualified\n");
 }

    return 0;
}