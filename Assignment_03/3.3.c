/**
Write a program which accept number from user and print even factors of that
number.
Input : 36
Output: 2 6 12 18

*/

#include<stdio.h>

void Display(int No)
{
    int i = 0;
    for( i = 1 ;i <= No ; i++)
    {
        if(No % i == 0 && i % 2 == 0)
        {
                printf("%d\t",i);
        }
    }

}


int main()
{
    int iNo=0, i = 0;

    printf("\n Enter a Number==>");
    scanf("%d", &iNo);

    Display( iNo);

    return 0;

}
