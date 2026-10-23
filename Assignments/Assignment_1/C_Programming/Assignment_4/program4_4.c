#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter age : ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}