#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo = iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%dm", iRet);

    return 0;
}