// Count no. of lines in a file

#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[30];
   int ch, count = 0;


     printf("Enter filename: ");
     gets(filename);

     fp = fopen(filename, "rt");  // read-text mode

     if(fp  == NULL)  // file not opened
     {
         printf("File not found!\n");
         return;  // stop program
     }

     while(1)
     {
         ch = fgetc(fp);  // read a char
         if (ch == EOF)   // end of file
             break;

         if(ch == '\n')    // newline
            count ++;
     }

     fclose(fp);

     printf("No. of lines : %d", count);

}
