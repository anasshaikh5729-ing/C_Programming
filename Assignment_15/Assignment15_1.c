#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Name [30];

    printf("Enter Full Name\n");
    scanf("%[^'\n']s",Name);       // Special Scanf 

    printf("Your Name is : %s",Name);

    return EXIT_SUCCESS;
}