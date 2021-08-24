# High level Test Plan
| ID | Description	  | Category  | Status  |
| :---:   | :-: | :-: |  :-: | 
| HLR_01 | Menu should be display proper | Technical | Pass |
| HLR_02 | User should able to Log in with existing credentials  | Technical | Pass |
| HLR_03 | User should Unable to login with invalid credentials  | Technical | Pass |
| HLR_04 | Function Should be work properly | Technical | Pass |
| HLR_05 | User shall be able decide whether he wants to continue or not?	| Scenario Base | Pass |
| HLR_06 | User able to log out	| Technical | Pass |
| HLR_07 | User able to check his saftey percentage in online banking	| Technical | Pass |

# Low level Test Plan
| TEST No. | Description | Expected Input |Expected output | Actaual Output | Pass/Fail |
|----------|-------------|-----------------|-----------------|----------------|-----------|
|   L_06   | Checking the ATM pin is enter by user is matching or not| enter ATM pin with corrent input| SUCCESS | SUCCESS | Pass |
|   L_07   | Checking the ATM pin is enter by user is matching or not  | enter ATM pin with in-correct input  | Fail | Fail | Pass |
|   L_08   | Enter Valid operation (Either 1 or 2). | Enter Invalid input | INVALID_ENTRY | INVALID_ENTRY | Pass |
|   L_09   | Check Either Money is deposited or not if updated amount and exiting acoount is equal then deposited money| Enter amount you want to deposit | SUCCESS | SUCCESS | Pass |
|   L_10   | Check Either Money is withdrawn or not if updated amount and exiting acoount is equal then deposited money| Enter amount you want to withdraw |   SUCCESS |  SUCCESS | Pass |
| L_11 | Performing for Delay function | 100000000 | 99999999 | 99999999 | PASS |
| L_12 | Performing for Delay function | -111111111 | 0 | 0 | PASS |
| L_13     | Check wehther that user account is already present in our database or not | Enter your account number | SUCCESS | SUCCESS | PASS |
| L_14     | To check and verify the user's given entry should not be empty | Enter user details | SUCCESS | SUCCESS | PASS | 
