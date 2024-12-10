#include <stdio.h>

void main()
{
   FILE * fp;
   int ch;


     fp = fopen("names.txt", "rt");  // read-text mode


     while(1)
     {
         ch = fgetc(fp);  // read a char
         if (ch == EOF)   // end of file
             break;

         putch(ch);
     }

     fclose(fp);

}
