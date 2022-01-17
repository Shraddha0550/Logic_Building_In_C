/**
Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270

*/

#include<stdio.h>
int MultDigits(int iNo)
{
        int temp = 0, cnt = 0, rem = 0,mult = 1;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;
            mult *= rem;
            temp = temp / 10;
        }
        return mult;
}
int main()
 {
        int iValue = 0,iRet=0;

        printf("Enter number = ");
        scanf("%d",&iValue);

        iRet = MultDigits(iValue);

        printf("%d",iRet);

        return 0;
  }
