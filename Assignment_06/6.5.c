/**
Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000 745
Output : 74.5%

*/

#include<stdio.h>
float Percentage(int Value1, int Value2)
{
    float per=0.0;

    per = (float)Value2 / Value1 * 100 ;

   return per;
}
int main()
{
        int iValue1 = 0,iValue2 = 0;
        float fRet ;

        printf("Please enter total marks = ");
        scanf("%d",&iValue1);

        printf("Please enter obtained marks = ");
        scanf("%d",&iValue2);

        fRet = Percentage(iValue1, iValue2);

        printf("percentage is = %0.2f",fRet);

        return 0;
  }
