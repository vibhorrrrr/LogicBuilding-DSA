#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 2

BOOL ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: \n");

    scanf("%c", &cValue);

    bRet=ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It isn't a vowel");
    }
    return 0;
}