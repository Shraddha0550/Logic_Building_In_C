/**
.Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
*/

#include<stdio.h>

void NFact(int No)
{
    int i = 0;
    for( i = 1 ;i <= No ; i++)
    {
        if(No % i != 0)
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

    NFact( iNo);

    return 0;

}
