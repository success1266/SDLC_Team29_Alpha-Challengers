/**
 * @file BMST.h
 * @author Yuvaraj Dakhane (yuvaraj.dakhane@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ATM_H__
#define __ATM_H__
#include <stdio.h>

/**
 * @brief 
 * 
 */


typedef enum error_t
{
    INVALID_ENTRY,
    SUCCESS,
    FAIL,
    VALID_ENTRY,
} error_t;


/**
 * @brief 
 * 
 * @param pass 
 * @return error_t 
 */
error_t Login(int pass);


/**
 * @brief 
 * 
 * @param choos 
 * @return error_t 
 */

error_t wrong_Choice(int choos);


/**
 * @brief 
 * 
 * @param ptr 
 * @param dep 
 * @return error_t 
 */

error_t Money_Deposit(FILE *ptr, float dep);


/**
 * @brief 
 * 
 * @param ptr 
 * @param dep 
 * @return error_t 
 */

error_t Money_Withdraw(FILE *ptr, float dep);

#endif