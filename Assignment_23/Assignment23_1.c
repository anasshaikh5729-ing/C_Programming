#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : strlwrx
// Input         : String
// Output        : String
// Descryption   : Covert Capital Charcter into small
// Date          : 7/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

char* strlwrx(char *str)
{
    static char Ans [255];
    int i = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z' )
        {
            Ans[i]=(*str+32);
        }
        else
        {
           Ans[i]=(*str);
        }
        str++;
        i++;
    }
    Ans[i] = '\0';
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
    char *str = NULL;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    str = strlwrx(Arr);

    printf("Modified String is : %s ",str);
    return EXIT_SUCCESS;
}