//////////////////////////////////////////////////////////
//
//  Function Name: CalculateElectricityBill
//  Description  : Accepts the electricity units consumed
//                 and calculates the bill using slab rates:
//                 first 100 units at Rs 5, next 100 units
//                 at Rs 7, above 200 units at Rs 10
//  Input        : Integer (units consumed)
//  Output       : Prints the total bill with 2 decimal
//                 places on the screen
//                 (for 150 it prints 850.00)
//  Date         : 22/10/2026
//  Author       : Anas Shaikh
//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + (iUnits - 100) * 7;
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + (iUnits - 200) * 10;
    }
    printf("Total Bill = %.2f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
