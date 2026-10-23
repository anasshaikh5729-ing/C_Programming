#include <stdio.h>
#include <stdlib.h>

void CalculatDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f

        if (fAmount < 0)
    {
        printf("Invalid Purchase amount\n");
        return;
    }
    if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
}

int main()
{
    float fAmount = 0;

    printf("Enter Purchase amount :");
    scanf("%f", &fAmount);

    CalculatDiscount(fAmount);

    return EXIT_SUCCESS;
}