# Conditional Statement 4

1. Exercises 
- Make ATM machine
- Make 2 options:  1) deposit 2) withdrawal
- Print out after the transaction is finished

2. Answers

- 

```c
#include <stdio.h>

int main(){
    int cash = 8000;
    int atm = 5000;
    printf("====ATM===="); printf("\n");
    printf("1. deposit 2.withdrawal"); printf("\n");
    
    int select;
    scanf("%d", &select);
    if (select==1){
        printf("Type the amount of money: "); printf("\n");
        int deposit;
        scanf("%d", &deposit);
        if (deposit<=cash){
            cash = cash - deposit;
            atm = atm + deposit;
        }
        else if (deposit>cash) {
            printf("Error! Please type again"); printf("\n");
        }
    }

    if (select==2){
       printf("Type the amount of money: "); printf("\n");
        int withdrawal;
		    scanf("%d", &withdrawal);
		    if (withdrawal<=atm){
            atm = atm - withdrawal;
            cash = cash + withdrawal;
        }
        else if (atm < withdrawal) {
            printf("Error! Please type again"); printf("\n");
        }
    }
    printf("cash: %d  Balance: %d", cash, atm);printf("\n");
    return 0;
}
``` 
