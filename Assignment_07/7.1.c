#include<stdio.h>
void Pattern(iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 0 ; i < iNo ; i++)
    {
        printf("  *  $ ");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return;
}
