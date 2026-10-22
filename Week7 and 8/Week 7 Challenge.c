#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 5

int main() {
    char names[MAX_SUPPLIERS][100];
    char emails[MAX_SUPPLIERS][100];
    char phones[MAX_SUPPLIERS][20];
    char towns[MAX_SUPPLIERS][100];

    char searchName[100];
    char message[150];

    int count = 0;
    int choice;
    int i;
    int found;

    do {
        printf("\n================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (count < MAX_SUPPLIERS) {
                    printf("\nEnter supplier name: ");
                    scanf(" %99[^\n]", names[count]);

                    printf("Enter email: ");
                    scanf(" %99s", emails[count]);

                    printf("Enter phone: ");
                    scanf(" %19s", phones[count]);

                    printf("Enter town: ");
                    scanf(" %99[^\n]", towns[count]);

                    count++;

                    printf("\nSupplier added successfully!\n");
                } else {
                    printf("\nSupplier list is full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo suppliers available.\n");
                } else {
                    printf("\n--- SUPPLIER LIST ---\n");

                    for (i = 0; i < count; i++) {
                        printf("\nSupplier %d\n", i + 1);
                        printf("Name: %s\n", names[i]);
                        printf("Email: %s\n", emails[i]);
                        printf("Phone: %s\n", phones[i]);
                        printf("Town: %s\n", towns[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter supplier name to search: ");
                scanf(" %99[^\n]", searchName);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (strcmp(names[i], searchName) == 0) {
                        printf("\nSupplier found!\n");
                        printf("Name: %s\n", names[i]);
                        printf("Email: %s\n", emails[i]);
                        printf("Phone: %s\n", phones[i]);
                        printf("Town: %s\n", towns[i]);

                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("\nSupplier not found.\n");
                }
                break;

            case 4:
                if (count == 0) {
                    printf("\nNo suppliers available.\n");
                } else {
                    printf("\n--- SUPPLIER NAME LENGTHS ---\n");

                    for (i = 0; i < count; i++) {
                        printf("%s: %zu characters\n",
                               names[i], strlen(names[i]));
                    }
                }
                break;

            case 5:
                strcpy(message, "Thank you for using ");
                strcat(message, "Municipal Financial Management!");

                printf("\n%s\n", message);
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
