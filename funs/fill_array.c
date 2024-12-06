#include<stdio.h>


void fill_array(int a[], int length, int value)
{
 int i;

    for (i = 0; i < length; i ++)
        a[i] = value;
}

void fill_string(char st[], int length,char value)
{
 int i;

    for (i = 0; i < length; i ++)
        st[i] = value;

    st[length] = '\0';
}


void main()
{
    int arr[5];
    int arr2[10];
    char s[20];

      fill_array(arr, 5, 0);
      fill_array(arr2, 10, 1);

      fill_string(s, 10, '*');
      puts(s);



}
