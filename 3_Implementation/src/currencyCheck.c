#include "currency.h"
#include <stdio.h>
#include <string.h>
#include "fun.h"
#include <math.h>
#include <stdlib.h>
#define Swiss_Franc_rate 1.09 /*Swiss Franc rate*/
checkCurrency FILE_NOT_EXIST(FILE *ptr)
{
    if (ptr == NULL)
    {
        return FILE_NOT_FOUND;
    }
}
checkCurrency WRONG_ENTRY(int choose)
{
    if (choose > 6)
    {
        return INVALID_ENTRY;
    }
}
checkCurrency ACC_FOUND(FILE *ptr)
{
    int count = 0;
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        count++;
        if (add.acc_no == 6)
        {
            return FOUND;
        }
    }
    if (count < 1)
    {
        return NOT_FOUND;
    }
}
checkCurrency RATE_FOUND(float swiss_rate)
{
    if (abs(Swiss_Franc_rate - swiss_rate) < 1e-9)
    {
        return RATE_FOUND_SUCCESSFULLY;
    }
    else
    {
        return RATE_NOT_FOUND_SUCCESSFULLY;
    }
}
checkCurrency CLOSE_CURRENCY(char *EXIT_PROGRAM, int choose)
{
    if (choose == 6)
    {
        char str2[20] = "Exit the Program";
        int value = strcmp(EXIT_PROGRAM, str2);
        if (value == 0)
        {
            return CLOSING_CURRENCY_TAB;
        }
    }
    return ERROR_;
}