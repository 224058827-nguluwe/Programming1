#include <stdio.h>

int main() {
    // Declare variables
    char registrations[20][20];
    char search[20];
    int i, j, found;

    // Capture 20 registration numbers
    printf("Enter 20 vehicle registration numbers:\n");

    for (i = 0; i < 20; i++) {
        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    // Display all registration numbers
    printf("\nVehicle Registration Numbers:\n");

    for (i = 0; i < 20; i++) {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    // Search for a registration number
    printf("\nEnter a registration number to search for: ");
    scanf("%19s", search);

    found = 0;

    for (i = 0; i < 20; i++) {
        j = 0;

        // Compare each character
        while (registrations[i][j] == search[j] &&
               registrations[i][j] != '\0' &&
               search[j] != '\0') {
            j++;
        }

        // If both strings ended at the same time, they are equal
        if (registrations[i][j] == '\0' && search[j] == '\0') {
            printf("Registration number found at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Registration number not found.\n");
    }

    return 0;
}