#include "bank.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int atm()
{
    //Functions
    int i;
    void mainMenu();
    void checkBalance(float balance);
    float moneyDeposit(float balance);
    float moneyWithdraw(float balance);
    void menuExit();
    void errorMessage();

    int login(void)
    {
        float number = 1234;
        int pass;
        printf("\n\n\t\t\tEnter the PIN No:");
        scanf("%d", &pass);

        if (pass == number)
        {
            printf("\n\nPIN Matched!\nLOADING");
            for (i = 0; i <= 6; i++)
            {
                fordelay(100000000);
                printf(".");
            }
            fflush(stdin);
            mainMenu();
        }
        else
        {
            printf("Invalid\n Try Again");
            login();
        }
        return 0;
    }

    //Main Code
    //Local Declarations
    int option;
    float balance = 15000.00;
    int choose;
    bool again = true;

    // insert code here...
    login();
    while (again)
    {

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Your Selection:\t");
        scanf("%d", &option);
        fflush(stdin);

        switch (option)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = moneyDeposit(balance);
            break;
        case 3:
            balance = moneyWithdraw(balance);
            break;

        case 4:
            menuExit();
            return 0;

        default:
            errorMessage();
            break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        fflush(stdin);

        if (choose == 2)
        {
            again = false;
            menuExit();
        }
        else
        {
            mainMenu();
        }
    }

    return 0;
}