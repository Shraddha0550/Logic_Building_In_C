/**

Write a program which accept number from user and print even factors of that number.
Input : 24
Output: 1 2 4 6 8 1

*/

#include<stdio.h>

void Display(int No)
{
    int i = 0;
    for( i = 1 ;i <= No ; i++)
    {
        if(No % i == 0)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",i);
            }
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
