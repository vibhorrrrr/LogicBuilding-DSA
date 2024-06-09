#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1, iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of the number is %d", iRet);

    return 0;
}