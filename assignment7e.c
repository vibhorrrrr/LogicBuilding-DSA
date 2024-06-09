#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iDiffFact = 0, iFact = 1, iCnt = 0, iEvenFact = 1, iOddFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
        else
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    iDiffFact = iEvenFact - iOddFact;
    return iDiffFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}