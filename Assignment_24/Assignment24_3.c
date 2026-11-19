#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : charlocation
// Input         : String
// Output        : Integer
// Descryption   : find Index of that Charcter
// Date          : 8/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int charLocation(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str != ' ')
        {
            if(*str == cValue)
            {
                return iCount;
            }
            iCount++;
        }
        str++;
    }
    return -1;
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
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character \n");
    scanf(" %c",&cValue);

    iRet=charLocation(Arr,cValue);
    printf("Location of Charcter is : %d",iRet);

    return EXIT_SUCCESS;
}