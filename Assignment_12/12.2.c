/**
Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero

*/
#include<stdio.h>
void DisplayDigit(int iNo)
{
        int iDigit = 0 , i = 0;
        while(iNo!=0)
        {
            iDigit =iNo % 10;

            if(iDigit == 0)
            {
                printf("It Contains Zero ");
                i++;
                break;
            }
            iNo = iNo / 10;

        }
        if(i == 0)
        {
            printf("It Not Contains Zero ");
        }
}
int main()
{
        int iValue = 0;

        printf("Enter number = ");
        scanf("%d",&iValue);

        DisplayDigit(iValue);

        return 0;
}
