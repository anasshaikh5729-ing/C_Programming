#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Input         : Float,Float
// Descryption   : calculate Percentage
// Date          : 1/10/2026
// Author        : Shaikh Anas Hakim
//
///////////////////////////////////////////////////////////////////

float Percentage(float fTotal,float fObtained)
{
    float fPercentage = 0.0f;

    if(fTotal <= 0)
    {
        return EXIT_FAILURE;
    }
    if(fObtained < 0)
    {
        return EXIT_FAILURE;
    }
    else
    {
        fPercentage=(fObtained/fTotal)*100;
        return fPercentage;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter Total Marks\n");
    scanf("%f",&fValue1);

    printf("Enter Obtained Marks\n");
    scanf("%f",&fValue2);

    fRet=Percentage(fValue1,fValue2);
    printf("%f %",fRet);

    return EXIT_SUCCESS;
}