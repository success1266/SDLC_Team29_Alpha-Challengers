#include "Menu.h"
#include <stdio.h>
#include <string.h>
#include "bank.h"
#include <math.h>
#include <stdlib.h>
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