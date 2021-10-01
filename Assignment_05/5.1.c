/**
Write a program which accept number from user and display its multiplication of
factors.
Input : 12

Output : 144 (1 * 2 * 3 * 4 * 6)
*/

#include<stdio.h>

int MultFat(int No)
{
    int i = 0, fact = 1;
    for( i = 1 ;i <= No ; i++)
    {
        if(No % i == 0)
        {
           printf("%d\t",i);
           fact *= i ;
        }


    }


    return fact;
}


int main()
{
    int iNo=0, ret = 0;

    printf("\n Enter a Number==>");
    scanf("%d", &iNo);

    ret = MultFat( iNo);
    printf("\n Multiplication is = %d", ret);

    return 0;

}
