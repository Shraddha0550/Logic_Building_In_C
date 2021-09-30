/**
Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d

*/

#include<stdio.h>

void Display( int cValue)
{

    if(cValue >= 'A'  && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf(" Lower case character is = %c",cValue);
    }
    else if(cValue >= 'a'  && cValue <= 'z')
    {
        cValue = cValue - 32;

        printf("Upper case character is = %c",cValue);
    }

}
int main()

{
    char ch ;

    printf("\n Enter a character==>");
    scanf("%c",&ch);

    Display(ch);
    getch();
    return 0;

}
