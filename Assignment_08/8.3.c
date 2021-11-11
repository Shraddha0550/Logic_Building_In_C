/**
Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
*/

#include<stdio.h>

int MultFat(int No)
{
    int i = 0, fact = 1;
    if(No < 0)
    {
        No = -No;
    }
    for( i = No ;i >= 1 ; i--)
    {
       fact *= i;

    }


    return fact;
}


int main()
{
    int iNo=0, ret = 0;

    printf("\n Enter a Number==>");
    scanf("%d", &iNo);

    ret = MultFat( iNo);
    printf("\n multiflication is = %d", ret);

    return 0;

}
