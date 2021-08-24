/**
 * @file BANK.h
 * @author Yuvaraj Dakhane (yuvaraj.dakhane@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BANK_H__
#define __BANK_H__

/**
 * @brief 
 * 
 */
struct date
{
    int month, day, year;
};


/**
 * @brief 
 * 
 */
struct
{
    char name[60];
    int acc_no, age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
} add, upd, check, rem, transaction;


/**
 * @brief 
 * 
 * @param t 
 * @param amount 
 * @param rate 
 * @return float 
 */
float interest(float t, float amount, int rate);


/**
 * @brief 
 * 
 * @param j 
 */
void fordelay(int j);


/**
 * @brief 
 * 
 */
void new_acc();

/**
 * @brief 
 * 
 */
void view_list();

/**
 * @brief 
 * 
 */
void edit(void);
void transact(void);
void erase(void);
void see(void);
void close(void);
void menu(void);


/**
 * @brief 
 * 
 * @return int 
 */
int atm();
void mainMenu();


/**
 * @brief 
 * 
 * @param balance 
 */
void checkBalance(float balance);


/**
 * @brief 
 * 
 * @param balance 
 * @return float 
 */
float moneyDeposit(float balance);

/**
 * @brief 
 * 
 * @param balance 
 * @return float 
 */
float moneyWithdraw(float balance);


/**
 * @brief 
 * 
 */
void menuExit();

void errorMessage();

void fund_transfer();

void currency();

void start(); 

/**
 * @brief 
 * 
 * @param score_tracker 
 * @return int 
 */
int safetyCalculator(int score_tracker);


#endif