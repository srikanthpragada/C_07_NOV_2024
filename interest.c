// Program to display interest @12%
// Date : 12-NOV-2024

#include<stdio.h>

void main()
{
  int amount, interest;

     //Input
     printf("Enter amount :");
     scanf("%d",&amount);

     interest = amount * 12 / 100;

     //Output
     printf("Interest = %d",interest);

}
