#include<stdio.h>

void DisplayFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -(iNo);
    }
    int i = 1;
    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    
    scanf("%d", &iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}
