/**
Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1

*/

#include<stdio.h>
int  CountRange(int iNo)
{
        int temp = 0, cnt = 0, rem = 0;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;

            if( rem >3 && rem <7)
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

        iRet= CountRange(iValue);

        printf("%d",iRet);

        return 0;
  }
