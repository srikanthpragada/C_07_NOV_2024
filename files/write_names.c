#include <stdio.h>

void main()
{
   FILE * fp;
   char names[][20] = {"Scott", "Richards", "Kevin"};
   int i;


     fp = fopen("names.txt", "wt");  // write-text mode


     for(i = 0; i < 3; i ++)
     {
        fprintf(fp, "%s\n", names[i]);
     }


     fclose(fp);

}
