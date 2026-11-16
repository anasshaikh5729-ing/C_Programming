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
    int i =0;
    int j = 0;
    char ch ='\0';

    for(i=1; i<=iRows; i++)
    {
        for(j=1,ch='A'; j<=iCol; j++,ch++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch+32);
            }
            else
            {
                printf("%c\t",ch);
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
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number Of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}