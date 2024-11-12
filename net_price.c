// Program to display net price after a discount of 15%
// Date : 12-NOV-2024

#include<stdio.h>

void main()
{
  int price, discount, net_price;

     //Input
     printf("Enter price :");
     scanf("%d",&price);

     discount = price * 15 / 100;
     net_price = price - discount;


     printf("Price     : %6d\n",price);
     printf("Discount  : %6d\n",discount);
     printf("Net Price = %6d",net_price);

}
