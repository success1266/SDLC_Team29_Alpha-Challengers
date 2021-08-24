#ifndef __TRANSFER
#define __TRANSFER
#include <stdio.h>
typedef enum checkTransfer
{
    
   FILE_PRESENT,
   FILE_NOT_PRESENT,
   ACCOUNT_NOT_PRESENT,
   ACCOUNT_PRESENT,
    INSUFFICIENT_BALANCE,
    SUFFICIENT_BALANCE,
    BALANCE_OVER_FLOW,
    
    
} checkTransfer;

checkTransfer FILE_NOT_PRES(FILE *ptr);
checkTransfer INSUFFICIENT_ENTRY(int amt,FILE*ptr);
checkTransfer ACC_PRESENT(FILE *ptr);
checkTransfer OVERFLOW_ENTRY(int amt);

#endif