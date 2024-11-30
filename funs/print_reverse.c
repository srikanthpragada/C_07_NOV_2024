#include<stdio.h>

void print_reverse(int a[10])
{
 int i;

  for(i = 9;i >= 0; i--)
  {
     printf("%5d",a[i]);
  }
}

void main()
{
 int arr[] = {1,2,3,4,5,5,67,33,33,10};

    print_reverse(arr); // call
}
