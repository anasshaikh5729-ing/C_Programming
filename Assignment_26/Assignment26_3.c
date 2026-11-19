#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Charcter
// Descryption   : if Charcter is capital then Display Until Z and Ch is small display until a
// Date          : 9/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' &&  ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++,ch++)
        {
            printf("%c\t",ch);
        } 
    }
    else if(ch >= 'a' &&  ch <= 'z')
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--,ch--)
        {
            printf("%c\t",ch);
        }
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

    Display(cValue);
    return EXIT_SUCCESS;
}