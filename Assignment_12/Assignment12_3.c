#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Checktwo
// Input         : Integer
// Descryption   : count Two in Digit
// Date          : 30/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int CheckTwo(int iNo)
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
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo=iNo/10;
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

    iRet=CheckTwo(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}