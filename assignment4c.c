#include<stdio.h>

int NonFact(int iNo) 
{
    int i = 0;

    for (i = 0; i <= iNo/2 ; i++) 
    {
        if (iNo % i != 0) 
        {
            printf("%d  ", i);
        }
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
