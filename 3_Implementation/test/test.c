#include "unity.h"
#include "unity_internals.h"
#include "ATM.h"
#include "currency.h"
#include "Edit.h"
#include "Menu.h"
#include "osmeter.h"
#include "transaction.h"
#include "transfer.h"
#include "bank.h"
#include "osmeter.h"


/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
void test1(void)
    {
    FILE* ptr;
    ptr = fopen("recod.dat", "r");
    TEST_ASSERT_EQUAL(FILE_NOT_FOUND, FILE_NOT_EXIST(ptr));
    }
void test2(void)
    {
    int choose = 7;
    TEST_ASSERT_EQUAL(INVALID_ENTRY, WRONG_ENTRY(choose));
    }
void test3(void)
    {
    FILE* ptr;
    ptr = fopen("record.dat", "r");
    TEST_ASSERT_EQUAL(FOUND, ACC_FOUND(ptr));
    }
void test4(void)
    {
    TEST_ASSERT_EQUAL(RATE_FOUND_SUCCESSFULLY, RATE_FOUND(1.09));
    }
void test5(void)
    {
    char EXIT_PROGRAM[20] = "Exit the Program";
    int choose = 6;
    TEST_ASSERT_EQUAL(CLOSING_CURRENCY_TAB, CLOSE_CURRENCY(EXIT_PROGRAM, choose));
    }
//////////////////////////////////////////////////////////////////////////////////////////////////
void test6(void)
    {
    int pass = 1234;
    TEST_ASSERT_EQUAL(SUCCESS, Login(pass));
    }

void test7(void)
    {
        int choice=5;
        TEST_ASSERT_EQUAL(INVALID_ENTRY, wrong_Choice(choice));
    }

void test8(void)
    {
  
    FILE* ptr;
    ptr = fopen("record.dat", "r");
    float dep=1000;
    TEST_ASSERT_EQUAL(SUCCESS, Money_Deposit(ptr, dep));
    }

void test9(void)
    {
  
    FILE* ptr;
    ptr = fopen("record.dat", "r");
    float dep=1000;
    TEST_ASSERT_EQUAL(SUCCESS, Money_Deposit(ptr, dep));
    }

void test10(void)
    {
    TEST_ASSERT_EQUAL(99999999, For_Delay(100000000));
    TEST_ASSERT_EQUAL(111111110, For_Delay(111111111));
    }

void test11(void)
    {
    TEST_ASSERT_EQUAL(SUCCESS,  add_account( "1234", "Priya", "06", "08", "1998", "23", "patna", "Indian", "856321479", "Saving", "15000", "05", "25", "2021"));
    }

// void test12(void)
//     {
//         FILE* ptr;
//         ptr = fopen("record.dat", "r");
//         TEST_ASSERT_EQUAL(FOUND, Search_Account(ptr, 6));
//         TEST_ASSERT_EQUAL(NOT_FOUND, Search_Account(ptr, 123));
//     }

// void test_safteyCalculator(void)
// {
//   TEST_ASSERT_EQUAL(12, Safety_Calculator(1));
//   TEST_ASSERT_EQUAL(25, Safety_Calculator(2));
//   TEST_ASSERT_EQUAL(37, Safety_Calculator(3));
//   TEST_ASSERT_EQUAL(50, Safety_Calculator(4));
//   TEST_ASSERT_EQUAL(62, Safety_Calculator(5));
//   TEST_ASSERT_EQUAL(75, Safety_Calculator(6));
//   TEST_ASSERT_EQUAL(87, Safety_Calculator(7));
//   TEST_ASSERT_EQUAL(100, Safety_Calculator(8));
  
// }

// void test_negative_safteyCalculator(void)
// {
//   TEST_ASSERT_EQUAL(0, Safety_Calculator(-1));
//   TEST_ASSERT_EQUAL(0, Safety_Calculator(-5));
//   TEST_ASSERT_EQUAL(0, Safety_Calculator(-10));
// }
// void test_zero_safteyCalculator(void)
// {
//   TEST_ASSERT_EQUAL(0, Safety_Calculator(0));

// }

void test13(void)
    {
    int choose = 1;
    TEST_ASSERT_EQUAL(OPENS_CREATE_ACCOUNT_WINDOW, CASE(choose));
    }
void test14(void)
    {
    int choose = 2;
    TEST_ASSERT_EQUAL(OPENS_EDITING_WINDOW, CASE(choose));
    }
void test15(void)
    {
    int choose = 3;
    TEST_ASSERT_EQUAL(OPENS_MAKE_TRANSACTION_WINDOW, CASE(choose));
    }
void test16(void)
    {
    int choose = 4;
    TEST_ASSERT_EQUAL(OPENS_USER_ACCOUNT_DETAILS_WINDOW, CASE(choose));
    }
void test17(void)
    {
    int choose = 5;
    TEST_ASSERT_EQUAL(OPENS_DELETING_USER_ACCCOUNT_WINDOW, CASE(choose));
    }
void test18(void)
    {
    int choose = 6;
    TEST_ASSERT_EQUAL(OPENS_DISPLAY_USER_DETAILS_WINDOW, CASE(choose));
    }
void test19(void)
    {
    int choose = 7;
    TEST_ASSERT_EQUAL(OPENS_ATM_FEATURES_WINDOW, CASE(choose));
    }
void test20(void)
    {
    int choose = 8;
    TEST_ASSERT_EQUAL(OPENS_FUND_TRANSFER_WINDOW, CASE(choose));
    }
void test21(void)
    {
    int choose = 9;
    TEST_ASSERT_EQUAL(OPENS_CURRENCY_EXCHANGE_WINDOW, CASE(choose));
    }
void test22(void)
    {
    int choose = 10;
    TEST_ASSERT_EQUAL(CLOSES_WINDOW, CASE(choose));
    }

void test23(void)
    {
    TEST_ASSERT_EQUAL_FLOAT(10, interest(1, 1000, 1));
    TEST_ASSERT_EQUAL_FLOAT(1800, interest(3, 6, 10000));
    TEST_ASSERT_EQUAL_FLOAT(1500, interest(1, 3, 50000));
    }

void test24(void)
    {
    int choice = 2;
    TEST_ASSERT_EQUAL(VALID_ENTRY, OUTPUT(choice));
    }

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
int main()
    {
    UNITY_BEGIN();
    RUN_TEST(test1);
    RUN_TEST(test2);
    RUN_TEST(test3);
    RUN_TEST(test4);
    RUN_TEST(test5);
    RUN_TEST(test6);
    RUN_TEST(test7);
    RUN_TEST(test8);
    RUN_TEST(test9);
    RUN_TEST(test10);
    RUN_TEST(test11);
    // RUN_TEST(test12);
    // RUN_TEST(test_safteyCalculator);
    // RUN_TEST(test_negative_safteyCalculator);
    // RUN_TEST(test_zero_safteyCalculator);
    RUN_TEST(test13);
    RUN_TEST(test14);
    RUN_TEST(test15);
    RUN_TEST(test16);
    RUN_TEST(test17);
    RUN_TEST(test18);
    RUN_TEST(test19);
    RUN_TEST(test20);
    RUN_TEST(test21);
    RUN_TEST(test22);
    RUN_TEST(test23);
    RUN_TEST(test24);

    // RUN_TEST(test13);

    return UNITY_END();
    }