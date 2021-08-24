#include "transaction.h"
#include <stdio.h>
#include <string.h>
#include "bank.h"
#include <math.h>
#include <stdlib.h>

int For_Delay(int j)
{
    int i, k;
    for (i = 0; i < j; i++)
        k = i;

    return k;
}

trans_t add_account( char acc_no[], char name[], char dob_month[], char dob_day[], char dob_year[], char age[], char address[], char citizenship[], char phone[], char acc_type[], char amt[], char deposit_month[], char deposit_day[], char deposit_year[])
    {
        
            if (acc_no == " " || name==" " || dob_month == " " || dob_day== " " || dob_year ==" " || age ==" " || address==" " || citizenship == " " || phone == " " || acc_type == " " || amt==" " || deposit_month==" " ||  deposit_day==" " || deposit_year==" ")
            {
                return DATA_SHOULD_NOT_EMPTY;
            }
            else
            {
                return SUCCESS;
            }
    }



trans_t Search_Account(FILE *ptr, int trans_no)
{
     int count = 0;
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
    {
        count++;
        if (add.acc_no == trans_no)
        {
            return FOUND;
        }
    }
    if(add.acc_no != trans_no)
    {
            return NOT_FOUND;
    }
}

