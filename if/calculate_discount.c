// Take price and calculate discount
// 20% if price is more than 10000 otherwise 10%

#include<stdio.h>

int main()
{
int price, discount;

    printf("Enter price :");
    scanf("%d",&price);

    if(price > 10000)
    {
        discount = price * 20 / 100;
    }
    else
    {
        discount = price * 10 / 100;
    }


    printf("Discount = %d", discount);
}
