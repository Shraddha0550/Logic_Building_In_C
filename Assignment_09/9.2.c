/**
Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
*/
#include<stdio.h>
int DollarToINR(int iNo)
{

        int Dol = 70, Ret = 0;

        Ret = iNo * Dol;

        return Ret;
}
int main()
{
        int iValue = 0,
        iRet = 0;

        printf("Enter number of USD =");
        scanf("%d",&iValue);

        iRet  = DollarToINR(iValue);

        printf("Value in INR is  = %d\n",iRet);

        return 0;
 }
