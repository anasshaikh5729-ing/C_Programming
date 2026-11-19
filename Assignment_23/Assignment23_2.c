#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : struprx
// Input         : String
// Output        : String
// Descryption   : Covert small Charcter into capital
// Date          : 7/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

char* struprx(char *str)
{
    static char Ans [255];
    int i = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            Ans[i]=(*str-32);
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

    str=struprx(Arr);
    printf("Modified String is : %s",str);

    return EXIT_SUCCESS;
}