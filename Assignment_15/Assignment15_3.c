#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : ChkEqual
// Input         : Integer,Integer
// Output        : Boolean
// Descryption   : Table
// Date          : 1/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else 
    {
        return false;
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
    BOOL bRet = false;
    
    printf("Enter first Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    bRet=ChkEqual(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("Number is equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return EXIT_SUCCESS;
}