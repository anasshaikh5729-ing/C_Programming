#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Input         : Integer
// Descryption   : DisplayRange
// Date          : 30/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    int iRange = 0;

    for(iRange = iStart; iRange<=iEnd; iRange++)
    {
        printf("%d\t",iRange);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Input         : Integer
// Descryption   : DisplayRange
// Date          : 30/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    int iRange = 0;

    for(iRange = iStart; iRange<=iEnd; iRange++)
    {
        printf("%d\t",iRange);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}