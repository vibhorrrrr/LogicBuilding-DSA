#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iCnt= 0, iSumEven = 0, iSumOdd = 0;
    if(iNo<0)
    {
        iNo = -(iNo);
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSumEven-iSumOdd;
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    int iRet = 0;
    iRet = CountDiff(iValue);
    
    printf("%d", iRet);

    return 0;
}