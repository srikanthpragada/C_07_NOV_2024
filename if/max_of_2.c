// Program to displays largest of 2 numbers
// Date : 15-NOV-2024

#include<stdio.h>

void main()
{
  int n1, n2;

     printf("Enter two numbers :");
     scanf("%d%d",&n1,&n2);

     if(n1 > n2)
        printf("%d", n1);
     else
        printf("%d", n2);
}
