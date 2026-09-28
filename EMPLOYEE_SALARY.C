#include <stdio.h>

// Function prototype

float calculateTax(float GrossSalary);

int main()
{
    float GrossSalary, Tax, NetSalary;

    printf("Enter your Gross Salary: ");
    scanf("%f", &GrossSalary);

    // function call
    Tax = calculateTax(GrossSalary);
    NetSalary = GrossSalary - Tax;

    // display result
    printf("\n=BILLS=\n");
    printf("The Gross Salary is: Ksh %.2f\n", GrossSalary);
    printf("The Tax Amount is: Ksh %.2f\n", Tax);
    printf("The Net Salary is: Ksh %.2f\n", NetSalary);

    return 0;
}

// Function definition
float calculateTax(float GrossSalary)
{
    float Tax;

    if (GrossSalary < 30000)
    {
        Tax = 0.05 * GrossSalary;
    }
    else if (GrossSalary >= 30000 && GrossSalary < 60000)
    {
        Tax = 0.10 * GrossSalary;
    }
    else
    {
        Tax = 0.15 * GrossSalary;
    }

    return Tax;
}
