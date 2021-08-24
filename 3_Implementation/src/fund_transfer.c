#include "bank.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void fund_transfer()
    {
    FILE* ptr;
    FILE* ptr2;
    FILE* newrec;
    ptr = fopen("record.dat", "r");
    newrec = fopen("new.dat", "w");
    int i = 0;
    int main_exit, main_exit1, main_exit2;
    printf("\n\n\n\t\t\t\t   Fund Transfer\n");
    printf("\n\n\n\n\n\t\t\t\tEnter current username :");
    scanf("%d", &check.acc_no);
    int amount;
    int account;
    int ch = 0;
retry:
    while (fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
        int count = 3;
        if (add.acc_no == check.acc_no)
            {
            ch++;
            printf("\n\t\t\t\tEnter the account of other's person : ");
            int acc;
            scanf("%d", &upd.acc_no);
        add_invalid:
            printf("\n\t\t\t\tEnter the amount to be sent : ");
            int amt;
            if (count < 1)
                {
                printf("\n\n\t\t\t\tYou can't access this anymore");
                break;
                }
            scanf("%d", &amt);
            if ((add.amt <= amt || add.amt <= 1)&&amt>0&&amt<2,147,483,647)
                {
                printf("\n\n\t\t\t\tInsufficient Balance");
                count--;
                printf("\n\n\t\t\t\tYou have %d more attempts left", count);
                goto add_invalid;
                }
            else
                {
                add.amt = add.amt - amt;
                amount = amt;
                account = upd.acc_no;
                fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
                printf("\n\t\t\t\tMoney has been sent successfully!");
                }

            }
        else
            {
            fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
            }
        }
    int chec = 0;
    if (ch < 1)
        {
        printf("\n\n\t\t\t\t Wrong username");
        printf("\n\n\t\t\t\tDo you want to try again?");
        printf("\n\n\n\t\tEnter 3 to retry:");
        scanf("%d", &main_exit1);
        if (main_exit1 == 3)
            {
            fflush(stdin);
            fund_transfer();
            }
        else
            {
            chec++;
            printf("\n\n\n\t\tWrong press");
        add_invalid3:
            printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
            scanf("%d", &main_exit2);
            if (main_exit2 == 1)
                menu();
            else if (main_exit2 == 0)
                close();
            else
                {
                printf("\nInvalid!\a");
                goto add_invalid3;
                }
            }


        }
    fclose(ptr);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat", "record.dat");
    FILE* ptr1;
    FILE* newrec1;
    ptr1 = fopen("record.dat", "r");
    newrec1 = fopen("new1.dat", "w");
    
    while (fscanf(ptr1, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.month, &add.deposit.day, &add.deposit.year) != EOF)
        {
        if (add.acc_no == account)
            {
                
            add.amt = add.amt + amount;
            fprintf(newrec1, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
            }
        else
            {
            fprintf(newrec1, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.month, add.deposit.day, add.deposit.year);
            }
        }
       
    fclose(ptr1);
    fclose(newrec1);
    remove("record.dat");
    rename("new1.dat", "record.dat");
    if (chec < 1)
        {
    add_invalid1:
        printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d", &main_exit);
        fflush(stdin);
        if (main_exit == 1)
            menu();
        else if (main_exit == 0)
            close();
        else
            {
            printf("\nInvalid!\a");
            goto add_invalid1;
            }
        }
    }
