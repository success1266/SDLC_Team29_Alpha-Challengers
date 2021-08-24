#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
#define Swiss_Franc_rate 1.09;     /*Swiss Franc rate*/
#define British_Pounds_rate 1.36;  /*British Pound rate*/
#define Japanese_Yen_rate 0.0091;  /*Japanese Yen rate*/
#define Canadian_Dollar_rate 0.78; /*Canadian Dollar rate*/
#define Euros_rate 1.17;

void currency()
{
    FILE *ptr;
    ptr = fopen("record.dat", "r");
    int count = 0;

    /*Declare floaters*/

    float Swiss_Franc;     /*Swiss Franc*/
    float British_Pounds;  /*British pounds*/
    float Japanese_Yen;    /*Japanese Yen*/
    float Canadian_Dollar; /*Canadian Dollar*/
    float Euros;           /*European Union Euro*/
    float USD;             /*US Dollar*/
    int choice;

    /*Title*/

    printf("\n\n\t\t\t       Currency Conversion Program\n");

    /*Menu*/

    printf("\n\n\t\t[1] Swiss Franc\n\t\t[2] British Pound\n\t\t[3] Japanese Yen\n\t\t[4] Canadian Dollar\n\t\t[5] Euro\n\t\t[6] Exit the Program");

    printf("\n");
    printf("\n");

    /*Input from User*/

    printf("\n\t\tPlease enter your choice (1-6): ");
    scanf("%d", &choice);

    while ((choice < 1) || (choice > 6))
    {
        printf("\n\t\tInvalid entry, please Enter 1-6: ");
        scanf("%i", &choice);
    }
    if (choice == 1)
    {
        printf("\n\t\tEnter the account number:");
        scanf("%d", &check.acc_no);

        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
            if (add.acc_no == check.acc_no)
            {
                /*Conversion Calculation 1*/
                Swiss_Franc = add.amt * Swiss_Franc_rate;
                printf("\n\n\t\tBalance in USD is $%.2f ", add.amt);
                printf("\n\n\t\tConversion Balance in Swiss Franc is CHF%.2f ", Swiss_Franc);
            }
        }
    }
    if (choice == 2)
    {

        printf("\n\t\tEnter the account number:");
        scanf("%d", &check.acc_no);

        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
            if (add.acc_no == check.acc_no)
            {
                /*Conversion Calculation 2*/
                British_Pounds = add.amt * British_Pounds_rate;
                printf("\n\n\t\tBalance in USD is $%.2f ", add.amt);
                printf("\n\n\t\tConversion Balance in British Pound is %.2f ", British_Pounds);
            }
        }
    }

    if (choice == 3)
    {
        printf("\n\t\tEnter the account number:");
        scanf("%d", &check.acc_no);

        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
            if (add.acc_no == check.acc_no)
            {
                /*Conversion Calculation 3*/
                Japanese_Yen = add.amt * Japanese_Yen_rate;
                printf("\n\n\t\tBalance in USD is $%.2f ", add.amt);
                printf("\n\n\t\tConversion Balance in Japanese Yen is %.2f ", Japanese_Yen);
            }
        }
    }

    if (choice == 4)
    {
        printf("\n\t\tEnter the account number:");
        scanf("%d", &check.acc_no);

        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
            if (add.acc_no == check.acc_no)
            {
                /*Conversion Calculation 4*/
                Canadian_Dollar = add.amt * Canadian_Dollar_rate;
                printf("\n\n\t\tBalance in USD is $%.2f ", add.amt);
                printf("\n\n\t\tConversion Balance in Canadian Dollar is C$%.2f ", Canadian_Dollar);
            }
        }
    }

    if (choice == 5)
    {
        printf("\n\t\tEnter the account number:");
        scanf("%d", &check.acc_no);

        while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
            if (add.acc_no == check.acc_no)
            {
                /*Conversion Calculation 5*/
                Euros = add.amt * Euros_rate;
                printf("\n\n\t\tBalance in USD is $%.2f ", add.amt);
                printf("\n\n\t\tConversion Balance in Euro is %.2f ", Euros);
            }
        }
    }
    if (choice == 6)
    {
        int main_exit;
        printf("\n\t\tExit the program:  ");

        fordelay(1000);
        count++;
        printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 1)
            menu();
        else
            close();
    }
    if (count < 1)
    {
        int main_exit;
        printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
        system("cls");
        if (main_exit == 1)
            menu();
        else
            close();
    }
}