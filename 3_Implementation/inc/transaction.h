#ifndef __TRANSACTION_H__
#define __TRANSACTION_H__
#include <stdio.h>

/**
 * @brief 
 * 
 */


typedef enum trans_t
{
     FOUND,
    //NOT_FOUND,
    //DATA_SHOULD_NOT_EMPTY,
    // SUCCESS,
    // FAIL,
} trans_t;


/**
 * @brief 
 * 
 * @param acc_no 
 * @param name 
 * @param dob_month 
 * @param dob_day 
 * @param dob_year 
 * @param age 
 * @param address 
 * @param citizenship 
 * @param phone 
 * @param acc_type 
 * @param amt 
 * @param deposit_month 
 * @param deposit_day 
 * @param deposit_year 
 * @return error_t 
 */
trans_t add_account( char acc_no[], char name[], char dob_month[], char dob_day[], char dob_year[], char age[], char address[], char citizenship[], char phone[], char acc_type[], char amt[], char deposit_month[], char deposit_day[], char deposit_year[]);


/**
 * @brief 
 * 
 * @param ptr 
 * @param trans_no 
 * @return error_t 
 */

trans_t Search_Account(FILE *ptr, int trans_no);


int For_Delay(int j);

#endif