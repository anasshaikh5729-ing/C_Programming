#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenRange
// Input         : Integer
// Descryption   : DisplayEvenRange
// Date          : 30/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void DisplayEvenRange(int iStart,int iEnd)
{
    int iRange = 0;

    for(iRange = iStart; iRange<=iEnd; iRange++)
    {
        if(iRange % 2 == 0)
        {
            printf("%d\t",iRange);
        }
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    DisplayEvenRange(iValue1,iValue2);
    return EXIT_SUCCESS;
}