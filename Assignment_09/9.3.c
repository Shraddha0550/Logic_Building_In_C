/**
Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2
*/
#include<stdio.h>
int EvenFactorial(int iNo)
{

    int i = 0, Mult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for( i = 1 ;i <= iNo ; i++)
    {
        if(i % 2 == 0)
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

        iRet  = EvenFactorial(iValue);

        printf("\nmultiplication of Even factors  = %d\n",iRet);

        return 0;
 }
