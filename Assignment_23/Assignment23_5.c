#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CountWhiteSpace
// Input         : String
// Output        : integer
// Descryption   : count White Spaces
// Date          : 7/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int CountWhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter Sting : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpace(Arr);
    printf("Count of White Spaces : %d",iRet);

    return EXIT_SUCCESS;
}