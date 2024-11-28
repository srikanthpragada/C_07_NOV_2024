// Take a string and check whether it is valid password

#include<stdio.h>

int main()
{
  char st[50];
  int i, upper = 0, digit = 0, special = 0;

      printf("Enter a string :");
      gets(st);

      for(i = 0; st[i] != '\0' ; i ++)
      {
         if(isupper(st[i]))
               upper = 1;
         else
            if(isdigit(st[i]))
                digit = 1;
            else
                if (st[i] == '#' || st[i] == '@' || st[i] == '_')
                    special = 1;
      }

      if(upper && digit && special)
          printf("Valid Password!");
      else
          printf("Invalid Password!");
}

