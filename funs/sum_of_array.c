#include<stdio.h>

int sum_array(int a[10])
{
  int i, total = 0;

      for(i = 0; i < 10; i ++)
      {
         total += a[i];
      }

      return total;
}


void main()
{
 int a[] = {1,2,3,4,5,6,7,8,9,9};

   printf("%d", sum_array(a) );
}
