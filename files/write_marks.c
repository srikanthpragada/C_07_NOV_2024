// Write 50 marks into marks.dat

#include <stdio.h>

void main()
{
   FILE * fp;
   int marks, i;

     fp = fopen("marks.dat", "wb");  // write-binary mode

     if(fp  == NULL)  // file not opened
     {
         printf("File cannot be created!\n");
         return;  // stop program
     }

     srand(time(0));

     for(i = 1; i <= 50; i ++)
     {
         marks = rand() % 100;
         fwrite(&marks, sizeof(marks), 1, fp);
     }

     fclose(fp);

}
