#include<stdio.h>

int main()
{
 char ch;

     printf("Enter char :");
     ch = getchar();


     if(ch >= 65 && ch <= 90)
        printf("Uppercase!");
     else
        printf("Non Uppercase!");
}
