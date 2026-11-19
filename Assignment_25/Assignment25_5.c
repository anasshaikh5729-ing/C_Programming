#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayScedule
// Input         : Charcter
// Descryption   : Display Schedule
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void DisplaySchedule(char cDivision)
{
    if(cDivision == 'A' || cDivision == 'a')
    {
        printf("7:00 Am \n");
    }
    else if(cDivision == 'B' || cDivision == 'b')
    {
        printf("8:30 Am \n");
    }
    else if(cDivision == 'C' || cDivision == 'c')
    {
        printf("9:20 Am \n");
    }
    else if(cDivision == 'D' || cDivision == 'd')
    {
        printf("10:30 Am \n");
    }
    else
    {
        printf("Invalid Input \n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Charcter \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return EXIT_SUCCESS;
}