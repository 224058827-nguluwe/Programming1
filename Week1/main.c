#include <stdio.h>

int main() {
    char municipality_name[100];
    char mayor_name[100];
    int population;
    
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("Welcome to Windhoek Municipality\n");
    printf("\nPlease enter the following municipal details:\n\n");
    
    printf("Municipality Name: ");
    scanf(" %[^\n]", municipality_name);
    
    printf("Mayor's Name: ");
    scanf(" %[^\n]", mayor_name);
    
    printf("Population: ");
    scanf("%d", &population);
    
    printf("\nMUNICIPAL INFORMATION REPORT\n");
    printf("\nMunicipality Name: %s\n", municipality_name);
    printf("Mayor's Name: %s\n", mayor_name);
    printf("Population: %d\n", population);
    printf("\nEnd of Report\n");
    
    return 0;
}