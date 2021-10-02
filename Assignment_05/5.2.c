/**

Write a program which accept number from user and display its factors in
decreasing order.
Input : 12
Output : 6 4 3 2 1

*/
#include<stdio.h>
void FatRev(int No)
{
    int i = 0;
    for( i = No ;i >= 1; i--)
    {
        if(No % i == 0)
        {
           printf("%d\t",i);
        }

    }

    printf("\n Reverse Factors is = %d",i);

}


int main()
{
    int iNo = 0;

    printf("\n Enter a Number==>");
    scanf("%d", &iNo);

    FatRev( iNo);


    return 0;

}
