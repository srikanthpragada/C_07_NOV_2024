#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[30], line[100], * p;
   int lineno = 1;


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
         // read a line
         p = fgets(line, 100, fp);
         if (p == NULL)  // EOF
              break;

         printf("%3d:%s", lineno, line);
         lineno ++;
     }

     fclose(fp);
}
