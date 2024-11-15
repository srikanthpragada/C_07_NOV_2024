// Program to interchange two variables
// Date : 15-NOV-2024

#include<stdio.h>

void main()
{
  int n1, n2, temp;

     printf("Enter two numbers :");
     scanf("%d%d",&n1,&n2);

     temp = n1;
     n1 = n2;
     n2 = temp;


     printf("%d %d",n1, n2);

}
