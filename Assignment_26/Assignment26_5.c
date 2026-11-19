#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Charcter
// Descryption   : Display Decimal.Octal,hexaDecimal
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("%d\n",ch);
    printf("0%o\n",ch);
    printf("0X%x\n",ch);
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Character \n");
    scanf("%c",&cValue);

    Display(cValue);
    return EXIT_SUCCESS;
}