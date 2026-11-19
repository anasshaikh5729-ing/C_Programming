#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : strRevx
// Input         : String
// Output        : String
// Descryption   : reverse String
// Date          : 8/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int iLength = 0;
    int i = 0;
    char temp = '\0';

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    for(i = 0; i < iLength / 2; i++)
    {
        temp = str[i];
        str[i] = str[iLength - i - 1];
        str[iLength - i - 1] = temp;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[255];

    printf("Enter String:\n");
    scanf(" %254[^\n]", Arr);

    StrRevX(Arr);

    printf("Reversed String: %s\n", Arr);

    return EXIT_SUCCESS;
}