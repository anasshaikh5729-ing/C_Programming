#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond, int iThird)
{
    if (iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest \n", iFirst);
    }
    else if (iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest \n", iSecond);
    }
    else
    {
        printf("%d is Greatest \n", iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter Three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}