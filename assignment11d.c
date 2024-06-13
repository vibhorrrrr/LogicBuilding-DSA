#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iCnt= 0, iMult = 1;
    if(iNo<0)
    {
        iNo = -(iNo);
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    int iRet = 0;
    iRet = MultDigits(iValue);
    
    printf("%d", iRet);

    return 0;
}