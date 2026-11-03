#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Input         : Integer
// Descryption   : count Digit which are greater than 3 less than 7
// Date          : 31/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit > 3  && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
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

    iRet=CountRange(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}