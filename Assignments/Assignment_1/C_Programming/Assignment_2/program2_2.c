// Accept no. from user display * of that number

void Display(int iNo)
{
    int iCnt = 0;
    while (iNo > iCnt)
    {
        printf("*");

        iNo--;
    }
    return iNo;
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}