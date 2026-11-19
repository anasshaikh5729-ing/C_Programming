#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayAscii
// Descryption   : Display Ascii Table
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("\nSymbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        if(i >= 32 && i <= 126)
        {
            printf("%c\t", i);
        }
        else
        {
            printf(" \t");
        }

        printf("%d\t", i);
        printf("%X\t\t", i);
        printf("%o\n", i);
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}