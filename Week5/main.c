#include <stdio.h>

int main() {
// Declare variables
double salary = 0;
double totalSalary = 0;
double averageSalary = 0;
double highestSalary = 0;
double lowestSalary = 0;

for (int i = 0; i < 50; i++) {
    printf("Enter salary for employee %d: ", i + 1);
    scanf("%lf", &salary);  
    totalSalary += salary;
    
    if (i == 0) {
        highestSalary = salary;
        lowestSalary = salary;
    } else {
        if (salary > highestSalary) {
            highestSalary = salary;
        }
        if (salary < lowestSalary) {
            lowestSalary = salary;
        }
    }  
} 

    // Calculate average salary
    averageSalary = totalSalary / (50);

    // Display results
    printf("Total Salary: %.2lf\n", totalSalary);       
    printf("Average Salary: %.2lf\n", averageSalary);
    printf("Highest Salary: %.2lf\n", highestSalary);
    printf("Lowest Salary: %.2lf\n", lowestSalary);
    
    return 0;

}