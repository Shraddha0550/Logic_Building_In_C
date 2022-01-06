/**
Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1

*/

#include<stdio.h>
int CountEven(int iNo)
{
        int temp = 0, cnt = 0, rem = 0;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;

            if(rem % 2 == 0)
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

        iRet=CountEven(iValue);

        printf("%d",iRet);

        return 0;
  }
