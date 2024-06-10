#include<stdio.h>

double RectArea(float fHeight, float fWidth)
{
    double fArea;
    fArea = fHeight * fWidth;
    return fArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("The area of the rectangle is %.3f", dRet);

    return 0;
}