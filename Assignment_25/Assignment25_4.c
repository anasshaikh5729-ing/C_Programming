#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : chkSmallCase
// Input         : Charcter
// Output        : Boolean
// Descryption   : check charcter is SmallCase
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

bool chkSmallCase(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
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
    bool bRet = false;

    printf("Enter Charcter \n");
    scanf("%c",&cValue);

    bRet=chkSmallCase(cValue);

    if(bRet == true)
    {
        printf("it is smallcase \n");
    }
    else
    {
        printf("it is not a Smallcase \n");
    }

    return EXIT_SUCCESS;
}