#include<stdio.h>

void Pattern(int iNo)
{   
    char cCnt = '\0';
    
    for(cCnt = 'A'; cCnt <= 'A' + iNo-1; cCnt++)
    {
        printf("%c\t", cCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}