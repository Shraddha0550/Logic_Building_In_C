/**
.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)

*/

#include<stdio.h>
int CountEven(int iNo)
{
        int temp = 0, cnt = 0, rem = 0,sumE = 0,sumO=0;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;

            if(rem % 2 == 0)
            {
                 sumE = sumE + rem;
            }
            if(rem % 2 == 1)
            {
                 sumO = sumO + rem;
            }

            temp = temp / 10;
        }

        return (sumE - sumO);


}
int main()
 {
        int iValue = 0,iRet=0;

        printf("Enter number = ");
        scanf("%d",&iValue);

        iRet=CountEven(iValue);

        printf("%d",iRet);

        return 0;
  }
