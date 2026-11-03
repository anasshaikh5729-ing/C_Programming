#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Input         : Integer,Integer,Integer
// Descryption   : Multipliactin of three numbers
// Date          : 1/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMult = 1;

        if(iNo1 != 0)
        {
            iMult=iMult*iNo1;
        }
        if(iNo2 != 0)
        {
            iMult=iMult*iNo2;
        }
        if(iNo3 != 0)
        {
            iMult=iMult*iNo3;
        }
        return iMult;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,iValue2= 0,iValue3 = 0;
    int iRet = 0;
    
    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number\n");
    scanf("%d",&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is : %d",iRet);

    return EXIT_SUCCESS;
}