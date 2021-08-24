#include<stdio.h>  
#include<stdlib.h>  
#include "bank.h"
int score_tracker=0;
  
void start()  
{  
        int answer; 
        fflush(stdin);
        printf("HELP: For each question you will be given two options YES or NO, Please press 1 for YES or 2 for NO");
		 
        printf("\n\nQ(1).Do you Check your online accounts and bank statements regularly to ensure that no unauthorized transactions have been made.\n 1. YES\t\t2. NO\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
  
        if(answer==1)  
        {  
            printf("Great! You are awesome\n\n");  
            ++score_tracker;  
  
        }  
        else  
        {  
            printf("Ummm... Not so quite.. You should!");  
        }  
  
        printf("\nQ(2) Have you Protected your computer by installing effective anti-virus / anti-spyware / personal firewall on your computer / mobile phone and update it regularly.\n1. YES\t\t2. NO\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
  
        if(answer==1)  
        {  
            printf("Awesome!\n\n");  
  
                ++score_tracker;  
  
        }  
        else  
        {  
            printf("Ummm... Not so quite.. You should!\n\n");  
        }  
  
        printf("\nQ(3) Do you disclose details like passwords, debit card grid values, etc. to anyone, even if they claim to be bank employees or on e-mails/links from government bodies like RBI, I.T. Dept., etc\n1. YES\t\t2. NO\n");  
  
        printf("Your answer: ");  
        scanf("%d",&answer);  
  
        if(answer==2)  
        {  
            printf("Well! Fantastic\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("No... You shoud never share it at any cost.\n\n");  
        }  
  
  
        printf("\nQ(4). Have Register for SMS alerts to keep track of your banking transactions?.\n1. YES\t\t2. NO\n");  
        printf("Your answer: ");   
        scanf("%d",&answer);  
        if(answer==1)  
        {  
            printf("Fantastic!\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("You should..\n\n");  
        }  
  
        printf("\nQ(5). Do you save confidential information such as your debit/credit card numbers, CVV numbers or PIN's on your mobile phone.\n1. YES \t\t 2. NO\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==2)  
        {  
            printf("I respect your self awareness! \n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("You should not!\n\n");  
        }  
  
        printf("\nQ(6). Do you disclose OTP with others\n1. YES \t\t 2. NO\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==2)  
        {  
            printf("Well!\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("Never disclose your OTPs with anyone!\n\n");  
        }  
  
        printf("\nQ(7). Have you share your ATM PIN, internet banking Password, UPI PIN with anyone?\n1. YES \t\t 2. NO\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==2)  
        {  
            printf("Good!\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("No.. You should never share your credentials.\n\n");  
        }  
  
        printf("\nQ(8). Do you follow up any random links recieved through mail or through any other medium?\n1. YES \t\t 2. NO\n");  
        printf("Your answer: ");  
        scanf("%d",&answer);  
        if(answer==2)  
        {  
            printf("Very well!\n\n");  
  
                ++score_tracker;  
        }  
        else  
        {  
            printf("No.. you should not.It might contain harmful viruses.\n\n");  
        }  
  
        
}  
  
int safetyCalculator(int score_tracker)
{

	 int saftey_percentage;
	 if(score_tracker>=0)
	 {
	 	saftey_percentage=((score_tracker*100)/8);
	    if(saftey_percentage == 100)
	    {
	 	printf("AWESOME! You are well aware of online banking Do's AND Don't's\n");
	 	return saftey_percentage;
	    }
	    else if(saftey_percentage>= 80 && saftey_percentage < 100)  
                {  
                    
				printf("Well but Need to be more Aware! Please be aware of online banking Do's AND Don't's\n");    
                return saftey_percentage;
				}  
                else if(saftey_percentage>= 60 && saftey_percentage < 80)  
                {  
                    printf("Not Quite.. Need to be Aware! Please be aware of online banking Do's AND Don't's\n");
                return saftey_percentage;
				}  
                else  
                {  
                    printf("You are on High Risk..You Need to be EXTREMELY Aware! Please be aware of online banking Do's AND Don't's\n");  
                return saftey_percentage;
				}
	 }
	 else{
	 	return 0;
	 }
	 
}
 