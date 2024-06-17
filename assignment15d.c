#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        if (i % 2 != 0)  // Odd row
        {
            int oddStart = 1;
            for(j = 1; j <= iCol; j++, oddStart++)
            {
                printf("%d\t", oddStart);
            }
        }
        else  // Even row
        {
            int evenStart = -1;
            for(j = 1; j <= iCol; j++, evenStart--)
            {
                printf("%d\t", evenStart);
            }
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
