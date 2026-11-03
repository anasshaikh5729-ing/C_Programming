#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Input         : Integer
// Descryption   : reverse digit
// Date          : 30/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return EXIT_SUCCESS;
}