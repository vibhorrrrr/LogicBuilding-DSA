#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    else if (iFrequency<0)
    {
        iFrequency = -(iFrequency);
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++) // Changed <= to <
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
