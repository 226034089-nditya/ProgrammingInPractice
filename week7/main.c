
#include <stdio.h>
#include <string.h>

int main(void) {

    //// TASK 1 - BASIC SUPPLIER DETAILS ////

    char supplierName[2][100];
    char email[100];
    char phone[30];
    char town[50];

    //// TASK 3 - VARIABLES ////

    char supplier1[100] = "ABC Office Supplies";
    char supplier2[100] = "Namibia Stationery";
    char searchName[100];

    //// TASK 4 - VARIABLES ////

    char original[100];
    char backup[100];

    //// TASK 5 - VARIABLES ////

    char town1[50] = "Windhoek";
    char sentence[200] = "";

    //// TASK 1 - INFORMATION DISPLAY ////

    printf("Enter the supplier name: ");
    fgets(supplierName[0], sizeof(supplierName[0]), stdin);
    supplierName[0][strcspn(supplierName[0], "\n")] = '\0';

    printf("Enter supplier email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Enter phone number: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    printf("Enter name of Town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name: %s\n", supplierName[0]);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town: %s\n", town);

    //// TASK 2 - STRING LENGTH ////

    printf("\n--- LENGTH OF SUPPLIER DETAILS ---\n");
    printf("Supplier name length: %zu\n",
           strlen(supplierName[0]));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));

    //// TASK 3 - SUPPLIER SEARCH ////

    printf("\n--- SUPPLIER SEARCH ---\n");
    printf("Enter Supplier Name to search: ");

    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    if (strcmp(searchName, supplier1) == 0 ||
        strcmp(searchName, supplierName[0]) == 0) {
        printf("Supplier found.\n");
    }
    else if (strcmp(searchName, supplier2) == 0) {
        printf("Supplier found.\n");
    }
    else {
        printf("Supplier not found.\n");
    }

    //// TASK 4 - COPYING SUPPLIER INFORMATION ////

    printf("\n--- COPYING SUPPLIER INFORMATION ---\n");
    printf("Enter supplier name: ");

    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    strcpy(backup, original);

    printf("Original supplier name: %s\n", original);
    printf("Backup supplier name: %s\n", backup);

    //// TASK 5 - CONSTRUCT SUPPLIER DESCRIPTION ////

    printf("\n--- SUPPLIER DESCRIPTION ---\n");

    strcat(sentence, supplierName[0]);
    strcat(sentence, " operates in ");
    strcat(sentence, town1);
    strcat(sentence, ".");

    printf("%s\n", sentence);

    return 0;
}
