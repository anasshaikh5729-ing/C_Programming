//Write a program which accepts N from user and print all odd numbers up to N
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : accepts N from user and print all odd numbers up to N
//  Input        : Integer
//  Output       : Integer
//  Date         : 01/11/2026
//  Author       : Shaikh Anas Hakim
//
//////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= iNo)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return EXIT_SUCCESS;
}