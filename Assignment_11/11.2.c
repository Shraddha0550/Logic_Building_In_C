/**
Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34

*/
#include<stdio.h>
void RangeDisplay(int iStart , int iEnd)
{
        int i = 0;
        if(iEnd < iStart)
        {
            printf("invalid");
        }
        for(i = iStart ; i <= iEnd ; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",i);
            }
        }
}

int main()
{
         int iValue1 = 0, iValue2 = 0;

         printf("Enter starting point =");
         scanf("%d",&iValue1);

         printf("Enter ending point=");
         scanf("%d",&iValue2);

         RangeDisplay(iValue1, iValue2);

         return 0;
}
