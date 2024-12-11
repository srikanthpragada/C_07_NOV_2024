// Take source and target file, copy source to target by converting upper to lower

#include <stdio.h>

void main()
{
   FILE * sfp, * tfp;
   char sfilename[30], tfilename[30];
   int ch;


     printf("Enter source filename: ");
     gets(sfilename);

     sfp = fopen(sfilename, "rt");  // read-text mode

     if(sfp  == NULL)  // file not opened
     {
         printf("File not found!\n");
         return;  // stop program
     }


     printf("Enter target filename: ");
     gets(tfilename);

     tfp = fopen(tfilename, "wt");  // write-text mode

     if(tfp  == NULL)  // file not opened
     {
         printf("File not found!\n");
         return;  // stop program
     }

     while(1)
     {
         ch = fgetc(sfp);  // read a char
         if (ch == EOF)   // end of file
             break;

         fputc(tolower(ch), tfp);  // write to target
     }

     fclose(sfp);
     fclose(tfp);
}
