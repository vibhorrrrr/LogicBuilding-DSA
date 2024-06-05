#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

bool ChkEven(int iNo)
{
    if((iNo % 2) != 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == 1)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number isn't odd");
    }

    return 0;
}
