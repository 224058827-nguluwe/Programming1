#include <stdio.h>
int main(){
    // Declare variables 
    double salary = 0.00;
    double housing_allowance = 0.00;
    double transport_allowance = 0.00;
    double tax_amount = 0.00;
    double gross = 0.00;
    double net = 0.00;
    //1. Ask user for salary
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    //2.Ask user for housing allowance
    printf("Enter your housing allowance: ");
    scanf("%lf", &housing_allowance);
    //3. Ask user for transport allowance
    printf("Enter your transport allowance: ");
    scanf("%lf", &transport_allowance);
    //4. Ask user for Tax amaount
    printf("Enter your tax amount: ");
    scanf("%lf", &tax_amount);
    //5. Calculate the Gross
    gross = salary + housing_allowance + transport_allowance;
    //6. Display the Gross 
    printf("Gross: %.2lf\n", gross);
    //7. Calculate the Net
    net = gross - tax_amount;
    //8. Display the Net
    printf("Net: %.2lf\n", net);
    return 0;
}