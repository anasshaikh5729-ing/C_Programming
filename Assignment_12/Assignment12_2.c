#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Input         : Integer
// Descryption   : Check Digit Contains zero or not
// Date          : 30/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;

        if(iDigit == 0)
        {
            return 1;
        }
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
    int iValue =0;
    BOOL bRet =FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet==1)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("there is no zero\n");
    }
    return EXIT_SUCCESS;
}