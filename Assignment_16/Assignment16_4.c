#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer,Integer
// Output        : Pattern
// Descryption   : Print Pattern
// Date          : 3/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRows,int iCol)
{
    int i = 0;
    int j =0;
    char ch = '\0';

    for(i = iRows; i>=1; i--)
    {
        for(j = 1; j<=iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number Of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}