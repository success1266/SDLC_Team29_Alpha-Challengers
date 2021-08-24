# High Level Test Plan
|Test ID|Description|Input|Expected Output| Actual output |
|---|---|---|---|---|---|
| H_01 | Check if the menu is displayed properly | - | Formatted menu page | Formatted menu page | 
| H_02 | User should able to Log in with existing credentials | Login Credentials | TRUE | TRUE |  
| H_03 | User should Unable to login with invalid credentials | Login Credentials | FALSE | FALSE | 
| H_04 | Check if the menu is displayed properly | Login Credentials | Formatted menu page | Formatted menu page | 
| H_05 | Not Stuck inside any Function | Function call | Proper function execution with return type and Message | Proper function execution with return type and Message | 
| H_06 | Check If User want to Continue or exit | Proper function execution with return type and Memu | | TRUE | TRUE |
| H_07 | User able to check his saftey percentage in online banking	 | - | TRUE | TRUE |

# Low level Test Plan
| TEST No. | Description | Expected Input |Expected output | Actaual Output | Pass/Fail |
|----------|-------------|-----------------|-----------------|----------------|-----------|
|   L_06   | Checking the ATM pin is enter by user is matching or not| enter ATM pin with corrent input| SUCCESS | SUCCESS | Pass |
|   L_07    | Checking the ATM pin is enter by user is matching or not  | enter ATM pin with in-correct input  | Fail | Fail | Pass |
|   L_08    | Enter Valid operation (Either 1 or 2). | Enter Invalid input | INVALID_ENTRY | INVALID_ENTRY | Pass |
|   L_09    | Check Either Money is deposited or not if updated amount and exiting acoount is equal then deposited money| Enter amount you want to deposit | SUCCESS | SUCCESS | Pass |
|   L_10    | Check Either Money is withdrawn or not if updated amount and exiting acoount is equal then deposited money| Enter amount you want to withdraw |   SUCCESS |  SUCCESS | Pass |

