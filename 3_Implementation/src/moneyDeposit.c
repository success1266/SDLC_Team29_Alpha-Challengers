#include "bank.h"
#include <stdio.h>

float moneyDeposit(float balance)
{
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);

    balance += deposit;

    printf("****Your New Balance is:   $%.2f\n\n", balance);
    return balance;
}