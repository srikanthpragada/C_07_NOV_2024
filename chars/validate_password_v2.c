// Validate password

#include<stdio.h>

int main()
{
 char ch;
 int i, upper = 0, digit = 0, special = 0;

     printf("Enter Password :");

     for(i = 1; i <= 8; i ++)
     {
       ch = getch();
       putch('*');

       if(isdigit(ch))
            digit = 1;
       else
         if(isupper(ch))
            upper = 1;
         else
            if(ch == '@'  || ch  == '*' || ch == '_')
                 special = 1;
     }

     if(upper && digit && special)
        printf("\nValid Password");
     else
     {
        if(!upper)
           printf("\nUppercase is missing");

        if(!digit)
           printf("\nDigit is missing");

        if(!special)
           printf("\nSpecial Char (* @ _) is missing");
     }
}
