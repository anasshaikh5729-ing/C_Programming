#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : LastCharacter
// Input         : String
// Output        : integer
// Descryption   : index of last occurance of that Charcter
// Date          : 8/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int LastCharcter(char *str, char cValue)
{
    int iCount = 0;
    int iLocation = 0;
    
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            if(*str == cValue)
            {
                iLocation=iCount;
            }
            iCount++;
        }
        str++;
    }
    return iLocation;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[255];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character \n");
    scanf(" %c",&cValue);

    iRet=LastCharcter(Arr,cValue);
    printf("Last Occurance : %d",iRet);

    return EXIT_SUCCESS;
}