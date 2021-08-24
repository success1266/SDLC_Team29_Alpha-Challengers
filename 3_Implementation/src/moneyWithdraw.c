#include "bank.h"
#include <stdio.h>
typedef int bool;
#define true 1
#define false 0
float moneyWithdraw(float balance)
{
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);

    while (back)
    {
        printf("Enter your amount to withdraw:\n");
        scanf("%f", &withdraw);

        if (withdraw < balance)
        {
            back = false;
            balance -= withdraw;
            printf("$$$$Your withdrawing money is:  $%.2f\n", withdraw);
            printf("****Your New Balance is:   $%.2f\n\n", balance);
        }

        else
        {

            printf("+++You don't have enough money+++\n");
            printf("Please contact to your Bank Customer Services\n");
            printf("****Your Balance is:   $%.2f\n\n", balance);
        }
    }
    return balance;
}