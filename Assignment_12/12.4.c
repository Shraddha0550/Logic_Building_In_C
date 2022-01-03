/**
Write a program which accept number from user and count frequency of 4 in it.
Input : 1018
Output : 0
Input : 9440
Output : 2
*/

#include<stdio.h>
int CountTwo(int iNo)
{
        int temp = 0, cnt = 0, rem = 0;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;

            if(rem == 4)
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

        iRet = CountTwo(iValue);

        printf("%d",iRet);

        return 0;
  }
