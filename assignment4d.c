#include<stdio.h>

void SumNonFact(int iNo) 
{
    int i = 0;
    int iSum=1;
    for (i = 1; i <= iNo; i++) 
    {
        if (iNo % i != 0) 
        {
            iSum = iSum + i;
        }
    }
    return iSum
    printf("\n");
}

int main() 
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}
