#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue>='a' && CValue<='z')
    {
        printf("%c",CValue-32 );
    }
    else
    {
        printf("%c", CValue+32);
    }
}
    
int main()
{
    char cValue = 0;
    
    printf("Enter character: ");
    
    scanf(" %c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}
