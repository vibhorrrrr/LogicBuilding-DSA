#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    char j = '\0';
    for(i = 1; i<=iRow; i++)
    {
        for(j = 'A'; j<='A' + iCol - 1; j++)
        {
            printf("%c\t", j);
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