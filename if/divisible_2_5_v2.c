// Take a number and display whether it is divisible by 2 and 5

#include<stdio.h>

int main()
{
 int num;

    printf("Enter a number :");
    scanf("%d",&num);

    if(num % 2 == 0)
      if(num % 5 == 0)
        printf("2 and 5");
      else
        printf("2");
    else
      if(num % 5 == 0)
         printf("5");
      else
         printf("None");

}
