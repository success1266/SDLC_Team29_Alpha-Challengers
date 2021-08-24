#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bank.h"

int i, j;
int main_exit;

int main()
{
    
    char pass[10], password[10] = "pass";
    int i = 0;
    
        int choice=0;

    printf("\n\n\n\t\t\t\t   Bank Management System\n\t\t\t\t\t User Login ");
    printf("\n\n\n\t\t\t[1]: To check your Vigilance in Online Bnking\n ");
    printf("\t\t\t[2]: Go to Admin Panel\n ");

    scanf("%d",&choice);  
  
    if(choice == 1)
    {
        int score_tracker=0;
        fflush(stdin);
        start(); 

        int score;
        
        printf("****THANKS FOR ANSWERING, WE VALUE YOUR ONLINE SAFTEY****\n");
        score= safetyCalculator(score_tracker);
        printf("Your saftey percentage is %d percent",score);  
    }
    else if (choice == 2){
    
        printf("\n\n\n\n\n\t\t\t\tEnter the password to login:");
        scanf("%s", pass);
        if (pass == password)
        {
            printf("\n\nPassword Match!\nLOADING");
            for (i = 0; i <= 6; i++)
            {
                fordelay(100000000);
                printf(". ");
            }
            printf("\n");
            system("pause");
            fflush(stdin);

            menu();
        }
        else
        {
            printf("\n\nWrong password!!\a\a\a");
        login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d", &main_exit);
            if (main_exit == 1)
            {

                fflush(stdin);
                main();
            }

            else if (main_exit == 0)
            {
                fflush(stdin);
                close();
            }
            else
            {
                printf("\nInvalid!");
                fordelay(1000000000);
                fflush(stdin);
                goto login_try;
            }
        }
    }
    else{
        exit(0);
    }
    return 0;
}
