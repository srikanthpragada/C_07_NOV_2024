#include<stdio.h>

int main()
{
 char ch, i, count = 0;

     for(i = 1; i <= 10; i ++)
     {
        printf("\nEnter char :");
        ch = getche();


        if(ch >= 65 && ch <= 90)
            count ++;
     }

     printf("\nCount = %d", count);
}
