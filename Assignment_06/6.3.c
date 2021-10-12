/**
Write a program which accept two numbers and check whether numbers are
equal or not.
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkGreater(int iNo1 , int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
     int iValue1 = 0 , iValue2 = 0;
     BOOL bRet = FALSE;

     printf("Please Enter Number : ");
     scanf("%d",&iValue1);

     printf("Please Enter Number : ");
     scanf("%d",&iValue2);

     bRet = ChkGreater(iValue1,iValue2);
     if(bRet == 1)
     {
        printf("Equal");
     }
     else
     {
        printf("Not Equal");
     }
     return 0;
}
