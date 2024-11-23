// Take char and invert its case

#include<stdio.h>

int main()
{
 char ch;

     printf("Enter char :");
     ch = getchar();


     if(isupper(ch))
         putch(tolower(ch));
     else
        if(islower(ch))
          putch(toupper(ch));
        else
          putch(ch);
}
