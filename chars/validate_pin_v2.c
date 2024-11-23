// Take 4 chars and check whether it is a valid pin - 4 digits

#include<stdio.h>

int main()
{
 char ch;
 int i, valid = 1;

     printf("Enter PIN :");

     for(i =1; i <= 4; i ++)
     {
       ch = getch();
       putch('*');

       if(!isdigit(ch))
            valid = 0;
     }

     if(valid)
        printf("\nValid PIN");
     else
        printf("\nInvalid PIN");
}
