#include <stdio.h>
int main() {
    // Declare variables
    double salaries[50];
    double averageSalary = 0.00;
    double highestSalary = 0.00;
    double lowestSalary = 0.00;
    double searchSalary = 0.00;
    //printf("Enter salaries for 50 employees:\n");
    printf("Enter salaries for 50 employees:\n");
    //1. Ask user for salary
    for(int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
    }
    //Display the salaries
    printf("\nSalaries entered:\n");
    for(int i = 0; i < 50; i++) {
        printf("Salary for employee %d: %.2lf\n", i + 1, salaries[i]);
    }
    //initialize highest and lowest salary
    highestSalary = salaries[0];
    lowestSalary = salaries[0];
    //2. Calculate the Average Salary, Highest Salary, and Lowest Salary
    for(int i = 0; i < 50; i++) {
        averageSalary += salaries[i];
        if(salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }
        if(salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }
    //Calculate the average salary
    averageSalary /= 50;
    //3. Display the results
    printf("\nTotal Salary: %.2lf\n", averageSalary * 50);
    printf("Average Salary: %.2lf\n", averageSalary);
    printf("Highest Salary: %.2lf\n", highestSalary);
    printf("Lowest Salary: %.2lf\n", lowestSalary);

    //Search for a specific salary
    printf("\nEnter a salary to search for: ");
    scanf("%lf", &searchSalary);

    int found = 0;
    for(int i = 0; i < 50; i++) {
        if(salaries[i] == searchSalary) {
            printf("Salary %.2lf found for employee %d\n", searchSalary, i + 1);
            found = 1;
        }
    }
    if(!found) {
        printf("Salary %.2lf not found.\n", searchSalary);
    }

    return 0;
}