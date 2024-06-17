#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iStart = 1;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++, iStart++)
        {
            if(iStart>9)
            {
                iStart = 1;
            }
            printf("%d\t", iStart);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}