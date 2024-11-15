// Program to displays bonus based on salary and grade
// Date : 15-NOV-2024

#include<stdio.h>

void main()
{
  int salary, grade, bonus;

     printf("Enter salary :");
     scanf("%d",&salary);

     printf("Enter grade [1/2] :");
     scanf("%d",&grade);


     if(grade == 1)
        bonus = salary * 50 / 100;
     else
        bonus = salary * 40 / 100;


     printf("Bonus = %d", bonus);
}
