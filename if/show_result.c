// Take marks and display result

#include <stdio.h>

void main()
{
  int marks;

    printf("Enter marks :");
    scanf("%d", &marks);

    if(marks > 50)
        printf("Passed!");
    else
        printf("Failed!");
}
