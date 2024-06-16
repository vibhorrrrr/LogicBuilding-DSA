#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char i, j;
    for(i = 1; i <= iRow; i++)
    {
        char startChar = (i % 2 == 0) ? 'a' : 'A'; // Determine whether to start with uppercase or lowercase
        for(j = startChar; j < startChar + iCol; j++)
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
