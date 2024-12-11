// Take rollno and display marks from marks.dat

#include <stdio.h>

void main()
{
   FILE * fp;
   int marks, rollno, count, pos;

     fp = fopen("marks.dat", "rb");  // read-binary mode

     if(fp  == NULL)  // file not opened
     {
         printf("File cannot be opened!\n");
         return;  // stop program
     }


     printf("Enter rollno :");
     scanf("%d",&rollno);

     pos = (rollno - 1) * sizeof(int);
     fseek(fp, pos, SEEK_SET); // move from the beginning

     count = fread(&marks, sizeof(marks), 1, fp);
     if(count == 0)  // read failed
        printf("Sorry! Rollno not found!");
     else
        printf("%d ", marks);


     fclose(fp);

}
