# Requirement #

## Introduction

The Bank Account Management System is an application for maintaining a person's account in a bank. In this project we tried to show the working of a banking account system and cover the basic functionality of a Bank Account Management System. To develop a project for solving financial applications of a customer in banking environment in order to nurture the needs of an end banking user by providing various ways to perform banking tasks. Also to enable the user’s work space to have additional functionalities which are not provided under a conventional banking project. The Bank Account Management System undertaken as a project is based on relevant technologies. The main aim of this project is to develop software for Bank Account Management System. This project has been developed to carry out the processes easily and quickly, which is not possible with the manuals systems, which are overcome by this software. The project is developed using C as a prgoramming language.

Bank Management System is based on a concept to generate and maintain daily payment transactions with the customer’s account. Before stepping into the main system a user has to pass through login system to get access, then only he/she can use all the features.

Our  motto  is  to  develop a  software  program  for  managing  the  entire  bank process  related  to  Administration  accounts  customer  accounts  and  to  keep each every track about their property and their various transaction processes efficiently.

## Research

In the existing Bank Management System, The admin has only few functionality like online fund transfer, opening an account, deposits, withdraws and updating the details, online payment services. And some bank using traditional way of maintaining details of a user in a bank was to enter the details and record them. The use of paper work in handling some of these processes could lead to human error, papers may end up in the wrong hands and not forgettingthe fact that this is time consuming.

Therefore we developed Bank Managemen System for Maintaing the customer data in bank database. And we are adding two more features on the existing Bank Management System 1) Exchanging Currency and 2) ATM Transactions.
Thus, in order to reduce time consumption and human effort the Bank Management System can applied in anywhere where user want to save the user details in Database.. The purpose of this systems to reduce time consumption and human efforts. 



## BENEFITS

1. Provide flexibility.

2. Customer won't have to wait for long time.

3. Everything will be very fast instead of hand written.

4. For doing work more accurately. No calculation problem as it will be done by computers.

5. Time consumption will be less.

6. A proper and managed detail of each and every customer will be maintained.

7. Customer satisfaction will be good.

8. Which will in turn lead to a faster growth in profit of the bank. 

9. It increases efficiency and saves the time of the customers


## Cost & FEATURES:

The Key Features of Bank Management System:

1. Create a bank account
   The user can create an account by:
    - Proving the name of the account holder. Each account is identify by an account number.
    - Selecting account type(Saving account or current account).    
    
2. Support of deposit and withdraw opeartions and maintaing a minimum balance.

4. Maintain Transactions.

5. Search and display the information account.

6. Update an account.

7. Remove existing account.

8. View customer's list.

9. ATM feature.
   

## FUNCTIONAL REQUIREMENTS

* <h5>displaymenu()-</h5> displays the menu welcome to the main menu

* <h5>displayoption()-</h5> displays the option to choosen.

* <h5>start_functions_of_bank_management()-</h5> starts the functions given in the display menu.

* <h5>startlogin()-</h5> Login and start using bank management system. 


## NON-FUNCTIONAL REQUIREMENTS
 * <h5>Performance constraints:</h5>
 This system must be fit according to the performance wise. It should
use less memory and will be easily accessible by the user. Memory

* <h5>Hardware limitations:</h5>
 It should be designed in such a way that cheap hardware must be
installed to access and use it effectively. It should be platform independent.

* <h5>Maintainable:</h5>
 Each of the modules should be designed in such a way that a new
module can easily be integrated with it.

* <h5> Reliable:</h5>

* <h5>Testable:</h5>


## Hardware and Software Requirements:
*	RAM atleast 1GB

*	CPU 1GHz or above

*	local storage of 100GB or above

* Visual Studio

*	Ubuntu or Windows OS required with C compiler pre installed.



## SWOT ANALYSIS

SWOT analysis is a strategic planning tool that evaluates a project's strengths, weaknesses, opportunities, and threats. It entails defining the project's goal and determining which internal and external factors are favourable and unfavourable to accomplishing that goal. The strengths and weaknesses usually arise from within an organisation, and the opportunities and threats from external sources.

![SWOT](https://github.com/YuvarajDakhane/SDLC_Team29_Alpha-Challengers/blob/master/1_Requirement/SWOT.PNG)

#### Figure 1: SWOT Analysis of Bank Managment System

## 4W's and 1'H

### Who  

* This is an overview of how bank management system works in short and can be used by an authorized person.
* For those who wants to save their time as well as money.
* For those who want a dedicated application where the user can store the information so that it will be easy to access the details.

### What

* A project where brief description of bank management system is discussed on how to maintain a person's account in a bank.

### When

* This application will helpful for when you don’t have a time and money to do that tedious task.

* And also when you want to edit the specific information and search of specific employee

### Where

* This application can be used in any bank who want manage there customer and transaction details

### How

* By using the basic functionality of a bank account management system. 


## Detail requirements
### High Level Requirements:

| ID | Description	  | Category  | Status  |
| :---:   | :-: | :-: |  :-: | 
| HLR_01 | Menu should be display proper | Technical | - |
| HLR_02 | User should able to Log in with existing credentials  | Technical | - |
| HLR_03 | User should Unable to login with invalid credentials  | Technical | - |
| HLR_04 | Function Should be work properly | Technical | - |
| HLR_05 | User shall be able decide whether he wants to continue or not?	| Scenario Base | - |
| HLR_06 | User able to log out	| Technical | - |



### Low level Requirements:

| ID | Description	  | Category | HLR_ID | Status  |
| :---:   | :-: | :-: |  :-: | :-: |
| LLR-01 | While adding a new User details the user shall not put any null value in the field, if it has NULL values it will show fail otherwise it will show SUCCESS | Technical | - | - |
| LLR-02 | While updating customer details option will search for employee in the file. If it contains in the list it will edit otherwise it will show NOT FOUND.| Technical | - | - |
| LLR-03 | While withdrawal amount from bank, the amount should be available in that account. If it is available then it will shown withdrawal else amount is insufficient | - | - |
| LLR-04 | While deleting a customer will search for employee in the file. If it contains in the list it will show "Employee Data is Deleted Successfuly" otherwise it will show NOT FOUND.  | Technical | - | - |
| LLR-05 | The pin is provided for accessing ATM feactures is valid of NOT. If it is valid then it will show SUCCESS otherwise, It will shown Failure| Technical | - | - |
| LLR-06 | Comparing the input name with Customer name in the list| Technical | - | - |
| LLR-07 | Verify the amount we deposit in bank it will add that amount to that particular use only| Technical | - | - |
| LLR-08 | Verify the amount we withdrawal from bank it will deduct from that amount to shown the update amount in that account| Technical | - | - |




