#include<stdio.h>
void PrintEven(int cnt)
{
    int No = 0;
   if( cnt <= 0)
   {
       return;
   }

   while( cnt > 0)
   {
       No = No + 2;
       printf("%d\t",No);
       cnt--;
   }

}


int main()
{
    int icnt = 0 , iNo = 0;

    printf("Enter the count number\n");
    scanf("%d" , &icnt);

    PrintEven(icnt);

    return 0;
}
