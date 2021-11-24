/**
Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)
*/
#include<stdio.h>
int ODDFactorial(int iNo)
{

    int i = 0, Mult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for( i = 1 ;i <= iNo ; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
            Mult = Mult * i;
        }
    }
    return Mult;
}
int main()
{
        int iValue = 0,
        iRet = 0;

        printf("Enter a number  =");
        scanf("%d",&iValue);

        iRet  = ODDFactorial(iValue);

        printf("\nmultiflication of Odd factors  = %d\n",iRet);

        return 0;
 }
