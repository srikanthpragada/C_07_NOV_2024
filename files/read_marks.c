// read marks forms marks.dat

#include <stdio.h>

void main()
{
   FILE * fp;
   int marks, count, i;

     fp = fopen("marks.dat", "rb");  // read-binary mode

     if(fp  == NULL)  // file not opened
     {
         printf("File cannot be opened!\n");
         return;  // stop program
     }


     while(1)
     {
         count = fread(&marks, sizeof(marks), 1, fp);
         if(count == 0)  // EOF
            break;

         printf("%d ", marks);
     }

     fclose(fp);

}
