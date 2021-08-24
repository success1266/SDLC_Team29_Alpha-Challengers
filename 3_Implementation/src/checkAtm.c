#include "bmst.h"
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



int For_Delay(int j)
{
    int i, k;
    for (i = 0; i < j; i++)
        k = i;

    return k;
}


error_t add_account( char acc_no[], char name[], char dob_month[], char dob_day[], char dob_year[], char age[], char address[], char citizenship[], char phone[], char acc_type[], char amt[], char deposit_month[], char deposit_day[], char deposit_year[])
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



error_t Search_Account(FILE *ptr, int trans_no)
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


int Safety_Calculator(int score_tracker)
{

	 int saftey_percentage;
	 if(score_tracker>=0)
	 {
	 	saftey_percentage=((score_tracker*100)/8);
	    if(saftey_percentage == 100)
	    {
	 	return saftey_percentage;
	    }
	    else if(saftey_percentage>= 80 && saftey_percentage < 100)  
                {      
				return saftey_percentage;
				}  
                else if(saftey_percentage>= 60 && saftey_percentage < 80)  
                {  
                    return saftey_percentage;
				}  
                else  
                {  
                    return saftey_percentage;
				}
	 }
	 else{
	 	return 0;
	 }
	 
}

#define Swiss_Franc_rate 1.09 /*Swiss Franc rate*/


menu_t CASE(int choose)
    {
    if (choose == 1)
        {
        return OPENS_CREATE_ACCOUNT_WINDOW;
        }
    else if (choose == 2)
        {
        return OPENS_EDITING_WINDOW;
        }
    else if (choose == 3)
        {
        return OPENS_MAKE_TRANSACTION_WINDOW;
        }
    else if (choose == 4)
        {
        return OPENS_USER_ACCOUNT_DETAILS_WINDOW;
        }
    else if (choose == 5)
        {
        return OPENS_DELETING_USER_ACCCOUNT_WINDOW;
        }
    else if (choose == 6)
        {
        return OPENS_DISPLAY_USER_DETAILS_WINDOW;
        }
    else if (choose == 7)
        {
        return OPENS_ATM_FEATURES_WINDOW;
        }
    else if (choose == 8)
        {
        return OPENS_FUND_TRANSFER_WINDOW;
        }
    else if (choose == 9)
        {
        return OPENS_CURRENCY_EXCHANGE_WINDOW;
        }
    else
        {
        return CLOSES_WINDOW;
        }
    }

error_t OUTPUT(int choice)
    {
        if (choice <= 2)
        {
            return VALID_ENTRY;
        }
    }
