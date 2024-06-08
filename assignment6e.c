#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 10; iCnt>0; iCnt--)
    {
        iTable = iCnt * iNo;
        printf("%d\t", iTable);
    } 

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);
    
    return 0;
}
