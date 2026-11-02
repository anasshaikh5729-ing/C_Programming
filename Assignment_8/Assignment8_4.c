//Write a program which accepts number from user and display it's table
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Table
//  Description  : accepts number from user and display its table
//  Input        : Integer
//  Output       : Integer
//  Date         : 01/11/2026
//  Author       : Shaikh Anas Hakim
//
//////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}