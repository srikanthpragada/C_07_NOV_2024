#include<stdio.h>

int main()
{
 char ch, i, count = 0;

     for(i = 1; i <= 10; i ++)
     {
        printf("Enter char :");
        ch = getchar();

        fflush(stdin); // clear keyboard buffer

        if(ch >= 65 && ch <= 90)
            count ++;
     }

     printf("Count = %d", count);
}
