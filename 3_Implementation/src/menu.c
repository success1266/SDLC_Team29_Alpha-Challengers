#include "bank.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void menu(void)
    {
    int choice;
    fflush(stdin);
    system("color 7");
    printf("\n\n\t\t\t       BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t[1] Create a new account\n\t\t[2] Update information of existing account\n\t\t[3] Transactions\n\t\t[4] Check the details of existing account\n\t\t[5] Remove existing account\n\t\t[6] View customer's list\n\t\t[7] ATM Feature\n\t\t[8] Fund Transfer\n\t\t[9] Currency Exchange\n\t\t[10] Exit\n\n\n\t\t Enter your choice:");
    scanf("%d", &choice);

    fflush(stdin);
    switch (choice)
        {
        case 1:
            new_acc();
            break;
        case 2:
            edit();
            break;
        case 3:
            transact();
            break;
        case 4:
            see();
            break;
        case 5:
            erase();
            break;
        case 6:
            view_list();
            break;
        case 7:
            atm();
            break;
        case 8:
            fund_transfer();
            break;
        case 9:
            currency();
            break;
        case 10:
            close();
            break;

        }
    }
