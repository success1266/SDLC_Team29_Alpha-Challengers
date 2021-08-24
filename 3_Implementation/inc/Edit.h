#ifndef __EDIT_H__
#define __EDIT_H__
#include <stdio.h>

/**
 * @brief 
 * 
 */


typedef enum edit_t
{
    FILE_NOT_FOUND,
    INVALID_ENTRY,
    FOUND,
    NOT_FOUND,
    OVER_FLOW,
    RATE_FOUND_SUCCESSFULLY,
    RATE_NOT_FOUND_SUCCESSFULLY,
    CLOSING_CURRENCY_TAB,
    DATA_SHOULD_NOT_EMPTY,
    ERROR_,
    SUCCESS,
    FAIL,
    VALID_ENTRY,
} edit_t;



edit_t OUTPUT(int choice);


#endif