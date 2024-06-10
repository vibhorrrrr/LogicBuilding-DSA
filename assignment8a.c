#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double fArea;
    fArea = PI * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("The area of the circle is %.4f", dRet);

    return 0;
}