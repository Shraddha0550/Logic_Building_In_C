/**
Write a program which accept number from user and return difference between
summation of all its factors and non factors.

*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0 , Fsum = 0 ,NFsum = 0;
    for(i = 1 ; i < iNo ; i++)
    {
        if(iNo % i == 0)
        {
            Fsum += i;
        }
        else
        {
            NFsum += i;
        }
    }

    return (Fsum - NFsum);

}
int main()
{
 int iValue = 0;
 int iRet = 0;

 printf("Enter number :");
 scanf("%d",&iValue);

 iRet = FactDiff(iValue);

 printf("%d",iRet);

 return 0;
}
