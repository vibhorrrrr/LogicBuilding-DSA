#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
    if(iStart>0 && iEnd>0 && iStart<iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
    else if (iStart<0 || iEnd<0 )
    {
        return printf("Invalid range\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("The addition is %d\n", iRet);

    return 0;
}