// Program to display cube of a number taken from user
// Date : 12-NOV-2024

#include<stdio.h>

void main()
{
  int num, cube; // declare variables

     //Input
     printf("Enter a number :");
     scanf("%d",&num);

     //Process
     cube = num * num * num;

     //Output
     printf("Cube of %d is %d", num, cube);

}
