#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : chkcharcter
// Input         : String
// Output        : Boolean
// Descryption   : Check charcter is available in string
// Date          : 8/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

bool ChkCharcter(char *str,char cValue)
{    
    while(*str != '\0')
    {
        if(cValue == *str)
        {
            return true;
        }
           str++;
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
    char Arr[255];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter Character : \n");
    scanf(" %c", &cValue);

    bRet=ChkCharcter(Arr,cValue);

    if(bRet == true)
    {
        printf("Charcter Found\n");
    }
    else
    {
        printf("Character Not Found \n");
    }
    return EXIT_SUCCESS;    
}