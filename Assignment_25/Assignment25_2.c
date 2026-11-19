#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : chkCapital
// Input         : Charcter
// Output        : Boolean
// Descryption   : check charcter is Capital
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

bool chkCapital(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
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

    bRet=chkCapital(cValue);

    if(bRet == true)
    {
        printf("Charcter is Capital \n");
    }
    else
    {
        printf("Character is not capital \n");
    }

    return EXIT_SUCCESS;
}