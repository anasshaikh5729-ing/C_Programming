#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("It is Even number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}