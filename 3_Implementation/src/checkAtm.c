#include "ATM.h"
#include <stdio.h>
#include <string.h>
#include "bank.h"
#include <math.h>
#include <stdlib.h>

error_t Login(int pass)
{
    int log=1234;
    if (log == pass)
    {
        return SUCCESS;
    }
}

error_t wrong_Choice(int choose)
{
    if (choose > 4)
    {
        return INVALID_ENTRY;
    }
}


error_t Money_Deposit(FILE *ptr, float dep)
{
    int count=0;
    float balance = 15000.00;
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        count++;
        if (add.acc_no == 6)
        {
            balance += dep;
            float new_bal = 15000.00 + dep;
           if(balance == new_bal)
           {
               return SUCCESS;
           }
        }
    }
    return FAIL;
}


error_t Money_Withdraw(FILE *ptr, float dep)
{
    int count=0;
    float balance = 15000.00;
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        count++;
        if (add.acc_no == 6)
        {
            balance -= dep;
            float new_bal = 15000.00 - dep;
           if(balance == new_bal)
           {
               return SUCCESS;
           }
        }
    }
    return FAIL;
}