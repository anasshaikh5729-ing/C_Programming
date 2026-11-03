#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Input         : Integer
// Descryption   : Check Greater
// Date          : 1/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = false;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}