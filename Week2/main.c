#include <stdio.h>

int main(){

    //Declare variables
    double revenue=0;
    double expense=0;
    double balance=0; 
    int departments=0;
    double payroll=0;
    double procurement=0;
    double assets=0;


     
    printf("MUNICIPAL BUDGET CALCULATOR\n");

    //PROMPT USER FOR REVENUE
    printf("Please enter the total revenue:");
    scanf("%lf", &revenue);

    //PROMPT USER FOR EXPENSE
    printf("Please enter the total expense:");
    scanf("%lf", &expense);

    printf("Please enter number of departments:");
    scanf("%d", &departments);

    printf("Please enter the total payroll:");
    scanf("%lf", &payroll);

    printf("Please enter the total procurement:");
    scanf("%lf", &procurement);

    printf("Please enter the total assests:");
    scanf("%lf", &assets);


    //Calculating Balance
    balance=revenue-expense;

    //Display Values and Balance
    printf("Revenue: %.2f \n", revenue);
    printf("Expense: %.2f\n", expense);
    printf("Balance: %.2f\n", balance);
    printf("Departments: %d\n", departments);
    printf("Payroll: %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets: %.2f\n", assets);

    return 0;
}