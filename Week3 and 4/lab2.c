#include <stdio.h>

int main()
{
    // Declare variables
    char name[50];
    float price, budget;
    int registration, documents;

    //User inputs 
    printf("Enter supplier name: ");
    scanf("%s", name);

    printf("Enter supplier price: ");
    scanf("%f", &price);

    printf("Enter budget: ");
    scanf("%f", &budget);

    //Ask if supplier is registered and if documents are complete
    printf("Valid registration? (1 = Yes, 0 = No): ");
    scanf("%d", &registration);

    printf("Documents complete? (1 = Yes, 0 = No): ");
    scanf("%d", &documents);

    //Check if supplier is qualified based on registration, documents, and price
    if (registration == 1 && documents == 1 && price <= budget)
    {
        printf("\nSupplier is Qualified.\n");
    }
    else
    {
        printf("\nSupplier is Disqualified.\n");
    }

    return 0;
}