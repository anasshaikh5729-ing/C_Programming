//////////////////////////////////////////////////////////
//
//  Function Name: CalculateBonus
//  Description  : Accepts monthly salary and years of
//                 service and calculates the bonus: more
//                 than 10 years gets 15% of salary, 5 to
//                 10 years gets 10%, less than 5 years
//                 gets 5%. Salary must be positive and
//                 years cannot be negative.
//  Input        : Float (monthly salary),
//                 Integer (completed years of service)
//  Output       : Prints the bonus with 2 decimal places,
//                 or "Invalid input" on the screen
//                 (for 30000 and 12 it prints 4500.00)
//  Date         : 22/10/2026
//  Author       : Anas Shaikh 
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input\n");
        return;
    }

    if (iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
    }
    else
    {
        fBonus = fSalary * 5 / 100;
    }

    printf("Bonus = %.2f\n", fBonus);
}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
