#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int multiple = 0;
    
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        multiple = iCnt * iNo;
        printf("%d\t", multiple);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);
    
    return 0;
}
