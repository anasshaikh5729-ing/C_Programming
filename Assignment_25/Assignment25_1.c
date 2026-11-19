#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : chkAlpha
// Input         : Charcter
// Output        : Boolean
// Descryption   : check charcter is alphabet or not
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

bool chkAlpha(char cAlpha)
{
    if(cAlpha >= 'A' && cAlpha <= 'Z' ||  cAlpha >= 'a' && cAlpha <= 'z')
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

    bRet = chkAlpha(cValue);

   if(bRet == true)
   {
    printf("it is Charcter \n");
   }
   else
   {
    printf("it is Not Charcter \n");
   }
    return EXIT_SUCCESS;
}