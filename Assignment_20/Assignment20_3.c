#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer,Integer
// Output        : Pattern
// Descryption   : Print Pattern
// Date          : 5/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRows,int iCol)
{
    int i = 0;
    int j = 0;
    
    for(i=1; i<=iRows; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((i+j) == iCol +1)
            {
                printf("*\t");
            }
            else if (i==1 || j==1 || i==iRows || j==iCol )
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
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
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}