#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : MulDigits
// Input         : Integer
// Descryption   : Multiply Digits
// Date          : 31/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigits=0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigits =iNo%10;

        if(iDigits != 0)
        {
            iMult = iMult*iDigits;
        }
        iNo=iNo/10;
    }
    return iMult;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}