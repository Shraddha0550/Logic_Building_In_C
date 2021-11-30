#include<stdio.h>
double FhtoCs(float fTemp)
{
    float Ret = 0.0;

    Ret =  (fTemp -32) * 5/9;

    return Ret;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit = ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Ater conversion feraenheit temperature to celcius = %0.4f",dRet);
    return 0;
}
