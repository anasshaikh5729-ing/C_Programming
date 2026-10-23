#include <stdio.h>
#include <stdlib.h>

void CheckLeapyear(int iYear)
{
    if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("It is a Leap Year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapyear(iYear);

    return EXIT_SUCCESS;
}