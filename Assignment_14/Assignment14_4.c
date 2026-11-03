#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Input         : Integer
// Descryption   : Non Factor Number Sum
// Date          : 1/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
           iSum = iSum+iCnt;
        }
    }
    return iSum;
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

    iRet=SumNonFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}