#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : chkDigit
// Input         : Charcter
// Output        : Boolean
// Descryption   : check input is Digit
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

bool chkDigit(char cValue)
{
    if(cValue >= '0' && cValue <= '9')
    {
        return true;
    }
    return false;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet =false;

    printf("Enter Charcter \n");
    scanf("%c",&cValue);

    bRet=chkDigit(cValue);

    if(bRet == true)
    {
        printf("it is Digit \n");
    }
    else
    {
        printf("It is not a digit \n");
    }

    return EXIT_SUCCESS;
}