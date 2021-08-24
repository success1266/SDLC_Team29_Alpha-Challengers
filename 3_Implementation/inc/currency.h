#ifndef __CURRENCY
#define __CURRENCY
#include <stdio.h>
typedef enum checkCurrency
{
    FILE_NOT_FOUND,
    //INVALID_ENTRY,
    // FOUND,
    NOT_FOUND,
    OVER_FLOW,
    RATE_FOUND_SUCCESSFULLY,
    RATE_NOT_FOUND_SUCCESSFULLY,
    CLOSING_CURRENCY_TAB,
    ERROR_,
} checkCurrency;

checkCurrency FILE_NOT_EXIST(FILE *ptr);
checkCurrency WRONG_ENTRY(int choose);
checkCurrency ACC_FOUND(FILE *ptr);
checkCurrency RATE_FOUND(float swiss_rate);
checkCurrency CLOSE_CURRENCY(char *EXIT_PROGRAM, int choose);
#endif