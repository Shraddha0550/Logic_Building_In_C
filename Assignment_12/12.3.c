/**
Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1


*/
#include<stdio.h>
int CountTwo(int iNo)
{
        int temp = 0, cnt = 0, rem = 0;

        temp = iNo;

        while(temp != 0)
        {
            rem = temp % 10;

            if(rem == 2)
            {
                 cnt++;
            }
            temp = temp / 10;

        }
        printf("%d",cnt);
}
int main()
 {
        int iValue = 0;
        printf("Enter number = ");
        scanf("%d",&iValue);
        CountTwo(iValue);
        return 0;
  }
