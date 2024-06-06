#include<stdio.h>

int SumNonFact(int iNo) 
{
    int i = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff=0;
    for (i = 1; i <= iNo; i++) 
    {
        if (iNo % i == 0) 
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }
    iDiff= iSumFact - iSumNonFact;
    return iSum;
    printf("\n");
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}
