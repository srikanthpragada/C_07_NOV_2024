// Print 10 to 1

#include<stdio.h>

int main()
{
 int n;

     for(n = 1; n <= 20 ; n += 2)
     {
         printf("%d ", n);
     }

     for(n = 1; n <= 20 ; n++)
     {
        if(n % 2 == 1)
          printf("%d ", n);
     }

}
