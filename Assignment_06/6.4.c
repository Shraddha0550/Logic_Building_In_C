/**
Write a program which accept three numbers and print its multiplication.
*/

#include<stdio.h>
#define TRUE 1
#define FAlSE 0
typedef int BOOL;


BOOL Display(int No1,int No2 ,int No3)
{
    BOOL mult = 0;
    if(No1 == 0 )
    {
        mult=No2 * No3;

    }

    if(No2 == 0)
    {

        mult = No1  * No3;
    }
    if(No3 == 0)
    {

        mult = No1 * No2;
    }
    if(No1 == 0 && No2 == 0 && No3 == 0)
    {
        mult  = No1 * No2 * No3;

    }
    if(No1 != 0 && No2 != 0 && No3 != 0)
    {
        mult  = No1 * No2 * No3;

    }

    return mult;
}

int main()
{
    int iNo1=0,iNo2 = 0,iNo3 = 0, bret = 0;

    printf("Enter Three numbers\n");
    scanf("%d%d%d",&iNo1,&iNo2,&iNo3);

    bret = Display(iNo1,iNo2,iNo3);

    printf("\n multiplication is = %d",bret);

    return 0;
}
