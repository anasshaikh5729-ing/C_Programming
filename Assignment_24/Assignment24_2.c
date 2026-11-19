#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Input         : String
// Output        : Integer
// Descryption   : Count Charcter
// Date          : 8/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int CountChar(char *str,char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
          iCount++;  
        }
        str++;
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
    char Arr[255];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character \n");
    scanf(" %c",&cValue);

    iRet=CountChar(Arr,cValue);
    printf("Count of Charcter %d",iRet);

    return EXIT_SUCCESS;
}