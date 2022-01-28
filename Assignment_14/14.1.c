/**
 Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include<stdio.h>
void Pattern(int iNo)
{
  char ch;
  for(ch = 65 ; ch < 65 + iNo; ch++)
  {
        printf("\t%c",ch);
  }
}
int main()
 {
     int iValue = 0;
     printf("Enter number of elements=");
     scanf("%d",&iValue);
     Pattern(iValue);
     return 0;
 }
