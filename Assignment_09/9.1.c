/**
Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
*/

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
     if(iNo < 0 )
     {
         iNo = -iNo;
     }
     for( i = 1 ;i <= 2*iNo ; i++)
     {

         if(i <= iNo)
         {
              printf("*\t");
         }
         else
         {
              printf("#\t");
         }
     }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
