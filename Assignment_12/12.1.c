/**
Write a program which accept number from user and display its digits in reverse
order.
Input : 2395
Output : 5
 9
 3
 2

*/
#include<stdio.h>
void DisplayDigitRev(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
 {
        int iValue = 0;
        printf("Enter number = ");
        scanf("%d",&iValue);
        DisplayDigitRev(iValue);
        return 0;
  }
