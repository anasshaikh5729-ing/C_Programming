#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if ((iValue % 5 || iValue % 3) == 0)
    {
        printf("Divisible by both\n");
    }
    else if ((iValue % 5) == 0)
    {
        printf("It is Divisible by 5 only\n");
    }
    else if ((iValue % 3) == 0)
    {
        printf("It is Divisible by 3 only\n");
    }
    else
    {
        printf("Not Divisible by either\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}