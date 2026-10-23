#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CNo)
{
    char vowels[] = "aeiouAEIOU";
    int i = 0;

    for (i = 0; vowels[i] != '\0'; i++)
    {
        if (vowels[i] == CNo)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue); // Notice the space before %c

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}