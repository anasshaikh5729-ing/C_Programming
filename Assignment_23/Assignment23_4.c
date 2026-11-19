#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Input         : String
// Output        :  Digit String
// Descryption   : Display Digit from String
// Date          : 7/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

char* DisplayDigit(char *str)
{
     static char Ans[255];
     int iDigit = 0;

     while(*str != '\0')
     {
        if(*str >= '0' && *str <= '9')
        {
           Ans[iDigit]=*str;
           iDigit++;
        }
        str++;
     }
     Ans[iDigit]= '\0';
     return Ans;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[255];
    char* cRet = NULL;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    cRet=DisplayDigit(Arr);
    printf("Digits in String Are : %s",cRet);

    return EXIT_SUCCESS;
}