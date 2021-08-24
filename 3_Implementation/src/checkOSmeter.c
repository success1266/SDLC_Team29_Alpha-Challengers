#include "Edit.h"
#include <stdio.h>
#include<osmeter.h>
#include <string.h>
#include "bank.h"
#include <math.h>
#include <stdlib.h>

int Safety_Calculator(int score_tracker)
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
