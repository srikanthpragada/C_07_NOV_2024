#include<stdio.h>


enum paymentmodes
{
   CASH = 1, UPI, CARD , NEFT = 10
};

void main()
{
  enum paymentmodes paymode;

       paymode = CARD;

       if (paymode == CARD)
       {
          printf("%d", paymode);

       }


}
