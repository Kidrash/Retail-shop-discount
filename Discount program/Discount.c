#include<stdio.h>
#include<stdlib.h>

int main()
{
    int purchaseAmount;
    int discountAmount;
    int discountedPrice;

    printf("What is your total purchase amount?\n");
    scanf("%d", &purchaseAmount);

    if(purchaseAmount >= 10000)
    {
        discountAmount = (10 * purchaseAmount) / 100;
        discountedPrice = (purchaseAmount - discountAmount);
        printf("Your discount is %d\n", discountAmount);
         printf("your Total is %d\n", discountedPrice);
         return(0);
    }

     else if(5000 <= purchaseAmount < 9999);
    {
        discountAmount = (5 * purchaseAmount) / 100;
        discountedPrice = (purchaseAmount - discountAmount);
          printf("Your discount is %d\n", discountAmount);
          printf("Your Total is %d\n", discountedPrice);
          return(0);
    }
    //  *****from here the code does not see to work with 3% and 0%***** //

     if(3000 <= purchaseAmount <= 4999)
     {
         discountAmount = (3  * purchaseAmount) / 100;
         discountedPrice = (purchaseAmount - discountAmount);
           printf("Your discount is %d\n", discountAmount);
          printf("Your Total is %d\n", discountedPrice);
          return(0);
     }
     else if(purchaseAmount < 3000)
          printf("Your discount is 0");
          printf("Your Total is %d\n", purchaseAmount);
     return(0);
}

