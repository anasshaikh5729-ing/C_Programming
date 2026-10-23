#include <stdio.h>

void DisplayConvert(char CNo)
{
    if ((CNo >= 'a') && (CNo <= 'z'))
    {
        printf("%c", CNo - 32);
    }
    else if ((CNo >= 'A') && (CNo <= 'Z'))
    {
        printf("%c", CNo + 32);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter character\n");
    scanf("%c", &CValue);

    DisplayConvert(CValue);

    return 0;
}