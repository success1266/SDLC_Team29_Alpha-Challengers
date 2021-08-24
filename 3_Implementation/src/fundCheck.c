#include "transfer.h"
#include <stdio.h>
#include <string.h>
#include "bank.h"
#include <math.h>
#include <stdlib.h>

checkTransfer FILE_NOT_PRES(FILE *ptr)
{
    if (ptr == NULL)
    {
        return FILE_NOT_PRESENT;

    }
    else
        return FILE_PRESENT;
}
checkTransfer INSUFFICIENT_ENTRY(int amt,FILE *ptr)
{
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        if (add.acc_no == 6)
        {
        if (amt <1 || add.amt<amt)
        {
            return INSUFFICIENT_BALANCE;
         }
         else
         return SUFFICIENT_BALANCE;
        }
    }
}
checkTransfer OVERFLOW_ENTRY(int amt)
{
    if (amt>add.amt)
    {
        return BALANCE_OVER_FLOW;
    }
}
checkTransfer ACC_PRESENT(FILE *ptr)
{
    int count = 0;
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        count++;
        if (add.acc_no == 6)
        {
            return ACCOUNT_PRESENT;
        }
    }
    if (count < 1)
    {
        return ACCOUNT_NOT_PRESENT;
    }
}

