#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit=0, iCnt= 0;
    if(iNo<0)
    {
        iNo = -(iNo);
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    int iRet = 0;
    iRet = CountRange(iValue);
    
    printf("%d", iRet);

    return 0;
}