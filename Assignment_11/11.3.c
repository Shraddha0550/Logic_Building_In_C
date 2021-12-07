/**
Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212

*/

#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{

        int i = 0 , sum = 0;

        if(iEnd < iStart || iStart < 0 )
        {
            printf("invalid");
        }
        else
        {
           for(i = iStart ; i <= iEnd ; i++)
           {
                sum = sum + i;
           }
        }
        return sum;
}

int main()
{
         int iValue1 = 0, iValue2 = 0 , iRet = 0;

         printf("Enter starting point =");
         scanf("%d",&iValue1);

         printf("Enter ending point=");
         scanf("%d",&iValue2);

         iRet = RangeSum(iValue1, iValue2);

         printf("The sum of given Range = %d",iRet);

         return 0;
}
