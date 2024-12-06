#include<stdio.h>

struct rect {
    int length;
    int breadth;
};

int equals(struct rect r1, struct rect r2)
{
    return r1.length == r2.length && r1.breadth == r2.breadth;
}

int area(struct rect r)
{
    return r.length * r.breadth;
}

struct rect square(int side) {
 struct rect r;

      r.length = r.breadth  = side;
      return r;
};

void main()
{
    struct rect r = {10, 20};
    struct rect s;

       printf("Enter length and breadth :");
       scanf("%d%d", &r.length, &r.breadth);

       printf("Area  : %d\n",  area(r));  // pass by value

       s = square(20);
       printf("Area  : %d\n",  area(s));  // pass by value

}
