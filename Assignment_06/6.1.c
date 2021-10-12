/**
Write a program which accept name from user and print that name.
**/

int main()
 {
     char Name[30] = "";

     printf("Please Enter Full Name : ");
     scanf("%[^\n]s",&Name);

     printf("Your Name is %s : ",Name);

     return 0;
 }
