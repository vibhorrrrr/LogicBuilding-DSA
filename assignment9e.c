#include<stdio.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart>iEnd)
    {
        printf("Invalid Range\n");
    }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}