#include<stdio.h>

double FhtoCs(float fTemp)
{
    fTemp=(fTemp - 32)*(5.0/9.0);
    return fTemp;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%f", dRet);

    return 0;
}