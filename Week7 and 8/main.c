#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 5

// Supplier arrays
char supplierName[MAX_SUPPLIERS][100];
char supplierEmail[MAX_SUPPLIERS][100];
char supplierPhone[MAX_SUPPLIERS][20];
char supplierTown[MAX_SUPPLIERS][100];

int supplierCount = 0;

// Function prototypes: Supplier functions
void addSupplier();
void displaySupplier();
void searchSupplier();

// Function prototypes: Financial functions
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);

// Menu function
void displayMenu();


// Display menu
void displayMenu() {
    printf("\n========================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("1. Add Supplier\n");
    printf("2. Display Supplier\n");
    printf("3. Search Supplier\n");
    printf("4. Calculate VAT\n");
    printf("5. Calculate Salary\n");
    printf("6. Calculate Budget\n");
    printf("7. Exit\n");
    printf("Enter choice: ");
}


// Add supplier
void addSupplier() {
    if (supplierCount >= MAX_SUPPLIERS) {
        printf("\nSupplier list is full!\n");
        return;
    }

    printf("\nEnter supplier name: ");
    scanf(" %99[^\n]", supplierName[supplierCount]);

    printf("Enter email: ");
    scanf(" %99s", supplierEmail[supplierCount]);

    printf("Enter phone: ");
    scanf(" %19s", supplierPhone[supplierCount]);

    printf("Enter town: ");
    scanf(" %99[^\n]", supplierTown[supplierCount]);

    supplierCount++;

    printf("\nSupplier added successfully!\n");
}


// Display all suppliers
void displaySupplier() {
    int i;

    if (supplierCount == 0) {
        printf("\nNo suppliers available.\n");
        return;
    }

    printf("\n========== SUPPLIER LIST ==========\n");

    for (i = 0; i < supplierCount; i++) {
        printf("\nSupplier %d\n", i + 1);
        printf("Name: %s\n", supplierName[i]);
        printf("Email: %s\n", supplierEmail[i]);
        printf("Phone: %s\n", supplierPhone[i]);
        printf("Town: %s\n", supplierTown[i]);
    }
}


// Search supplier by name
void searchSupplier() {
    char searchName[100];
    int i, found = 0;

    printf("\nEnter supplier name to search: ");
    scanf(" %99[^\n]", searchName);

    for (i = 0; i < supplierCount; i++) {
        if (strcmp(supplierName[i], searchName) == 0) {
            printf("\nSupplier found!\n");
            printf("Name: %s\n", supplierName[i]);
            printf("Email: %s\n", supplierEmail[i]);
            printf("Phone: %s\n", supplierPhone[i]);
            printf("Town: %s\n", supplierTown[i]);

            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("\nSupplier not found.\n");
    }
}


// Calculate VAT at 15%
float calculateVAT(float amount) {
    return amount * 0.15f;
}


// Calculate salary
float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}


// Calculate budget balance
float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}


// Main function
int main() {
    int choice;
    float amount, vat;
    float basic, housing, transport, salary;
    float revenue, expenses, balance;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addSupplier();
                break;

            case 2:
                displaySupplier();
                break;

            case 3:
                searchSupplier();
                break;

            case 4:
                printf("\nEnter amount before VAT: ");
                scanf("%f", &amount);

                vat = calculateVAT(amount);

                printf("VAT (15%%): %.2f\n", vat);
                printf("Total including VAT: %.2f\n",
                       amount + vat);
                break;

            case 5:
                printf("\nEnter basic salary: ");
                scanf("%f", &basic);

                printf("Enter housing allowance: ");
                scanf("%f", &housing);

                printf("Enter transport allowance: ");
                scanf("%f", &transport);

                salary = calculateSalary(
                    basic, housing, transport
                );

                printf("Total salary: %.2f\n", salary);
                break;

            case 6:
                printf("\nEnter total revenue: ");
                scanf("%f", &revenue);

                printf("Enter total expenses: ");
                scanf("%f", &expenses);

                balance = calculateBudget(revenue, expenses);

                printf("Budget balance: %.2f\n", balance);

                if (balance < 0) {
                    printf("Status: Over budget\n");
                } else {
                    printf("Status: Within budget\n");
                }
                break;

            case 7:
                printf("\nThank you for using MFMS!\n");
                break;

            default:
                printf("\nInvalid choice. Please select 1-7.\n");
        }

    } while (choice != 7);

    return 0;
}