/**
Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)
*/
#include<stdio.h>

void Display(int No)
{
    int i = 0 , mult = 1;
    for( i = 1 ;i <= No ; i++)
    {
        if( i % 2 == 1)
        {
                printf("%d\t",i);
                mult = mult * i;
        }
    }
    printf("\n%d",mult);

}


int main()
{
    int iNo=0, i = 0;

    printf("\n Enter a Number==>");
    scanf("%d", &iNo);

    Display( iNo);

    return 0;

}
