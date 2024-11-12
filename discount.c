// Program to display discount @15%
// Date : 12-NOV-2024

#include<stdio.h>

void main()
{
  int price, discount;

     //Input
     printf("Enter price :");
     scanf("%d",&price);

     discount = price * 15 / 100;

     //Output
     printf("Discount = %d",discount);

}
