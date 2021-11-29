/**
Write a program which accept distance in kilometer and convert it into meter. (1
kilometer = 1000 Meter)
Input : 5
Output : 5000
*/

#include<stdio.h>
int KMtoMeter(int iNo)
{
    int Ret = 0;
    Ret = iNo * 1000;

    return Ret;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter distance = ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("After conversion of KM to Meter = %d",iRet);
    return 0;
}
