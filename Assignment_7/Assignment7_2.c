//Write a program which accept number from user and print numbers till that number
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : accept number from user and print numbers till that number
//  Input        : Integer
//  Output       : Integer
//  Date         : 01/11/2026
//  Author       : Shaikh Anas Hakim
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}