// Program to take marks in two subjects and display total and avg
// Date : 13-NOV-2024

#include<stdio.h>

void main()
{
  int m1, m2, total;
  float avg;


     printf("Enter two marks :");
     scanf("%d%d",&m1, &m2);

     total = m1 + m2;
     avg = total / 2.0;


     printf("Total %d, Average %5.2f",total, avg);

}
