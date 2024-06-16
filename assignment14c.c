#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char i = '\0';
    int j = 0;
    for(i = 'A'; i<= 'A' + iRow-1; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            printf("%c\t", i);
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