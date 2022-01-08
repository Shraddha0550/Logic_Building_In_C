/**
Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3

*/

#include<stdio.h>
int Countodd(int iNo)
{
        int temp = 0, cnt = 0, rem = 0;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;

            if(rem % 2 == 1)
            {
                 cnt++;
            }
            temp = temp / 10;
        }
        return cnt;
}
int main()
 {
        int iValue = 0,iRet=0;

        printf("Enter number = ");
        scanf("%d",&iValue);

        iRet=Countodd(iValue);

        printf("%d",iRet);

        return 0;
  }
