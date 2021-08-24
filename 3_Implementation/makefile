PROJ_NAME = Bank_Management_System

SRC = src/atm.c \
src/balance_Check.c \
src/checkAtm.c \
src/checkEdit.c \
src/fundCheck.c \
src/checkMenu.c \
src/checkTrans.c \
src/checkOSmeter.c \
src/close.c \
src/CurrencyExchange.c \
src/currencyCheck.c \
src/edit.c \
src/erase.c \
src/errorMessage.c \
src/fordelay.c \
src/interest.c \
src/mainMenu.c \
src/menu.c \
src/menuExit.c \
src/moneyDeposit.c \
src/moneyWithdraw.c \
src/new_account.c \
src/see.c \
src/transaction.c \
src/view_list.c \
src/fund_transfer.c \
src/Online_Safety_Meter.c \


TEST = test/test.c\
unity/unity.c

BUILD_DIR = Build

INC = -Iinc\
-Iunity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:
	gcc bank_management_system.c $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST)
	gcc $^ $(INC) -o $(call FixPath,test.$(EXEC))
	./test.$(EXEC)

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST) $(INC) -o $(call FixPath,test.$(EXEC))
	./test.$(EXEC)
	gcov -a test.c

cppcheck:
	cppcheck --enable=all $(SRC) bank_management_system.c

valgrind:
	valgrind ./test.out


clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
