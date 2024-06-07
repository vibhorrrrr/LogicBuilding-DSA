#include<stdio.h>

void Display(int iNo)
{
    int iCnt = -iNo;
    for (iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}