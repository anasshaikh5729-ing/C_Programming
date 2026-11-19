#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer,Integer
// Output        : Pattern
// Descryption   : Print Pattern
// Date          : 6/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i=iNo; i>=1; i--)
    {
        printf("%d\t #\t",i);
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1  = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    Pattern(iValue1);
    return EXIT_SUCCESS;
}