#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Charcter
// Descryption   : Convert Capital into small and small ch into Capital 
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >='A' && ch <= 'Z')
    {
        printf("%c",ch+32);
    }
    else if(ch >='a' && ch <= 'z')
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return EXIT_SUCCESS;
}