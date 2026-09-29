#include<stdio.h>
int main() {
    // Declare variables
    double budgets[10];
    double total = 0.00;
    double averageBudget = 0.00;
    double temp;
    int i, j;
    // Ask user for budget
    printf("Enter budgets for 10 departments:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%lf", &budgets[i]);
        total += budgets[i];
    }
    // Display the budgets
    printf("\nBudgets entered:\n");
    for(i = 0; i < 10; i++) {
        printf("Budget for department %d: %.2lf\n", i + 1, budgets[i]);
    }
    // Calculate and display the average budget
    averageBudget = total / 10;
    printf("\nTotal budget: %.2lf\n", total);
    printf("Average budget: %.2lf\n", averageBudget);
    // Sort the budgets in ascending order using bubble sort
    for(i = 0; i < 10 - 1; i++) {
        for(j = 0; j < 10 - i - 1; j++) {
            if(budgets[j] > budgets[j + 1]) {
                // Swap budgets[j] and budgets[j + 1]
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }
    // Display the sorted budgets
    printf("\nBudgets in ascending order:\n");
    for(i = 0; i < 10; i++) {
        printf("Budget for department %d: %.2lf\n", i + 1, budgets[i]);
    }
    return 0;
}