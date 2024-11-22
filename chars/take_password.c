#include<stdio.h>

int main()
{
 char ch, i;


     printf("Enter password :");

     for(i = 1; i <= 8; i ++)
     {
        ch = getch();
        putch('*');
     }

}
