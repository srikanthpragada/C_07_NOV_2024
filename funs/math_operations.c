#include<stdio.h>
int add(int n1, int n2)
{
    return n1 + n2;
}

int iseven(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int count_zeros(int a[10])
{
  int i, count = 0;

      for(i = 0; i < 10; i ++)
      {
          if (a[i] == 0)
              count ++;
      }
      return count;
}


void main()
{
 int a[] = {1,2,0,3,4,0,2,30,0,0};

   printf("%d ", add(10,20));
   printf("%d ", iseven(10));
   printf("%d ", count_zeros(a));

}
