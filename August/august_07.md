# Conditional Statement 2

1. Exercise
- Hamburger Bending machine
    - input money first
    - order food
    - print out results  ex) not enough money, charge : £0.50 .. etc

2. Answers

- 

```c
#include <stdio.h>

int main(){

    int money = 0;
    printf("Insert money: \n");
    scanf("%d", &money);

    printf("===== Lotteria =====\n");
    printf("1. Hamburger £5\n");
    printf("2. Coke £7\n");
    printf("3. French Fries £13\n");

    int select = 0;
    printf("Press the button \n");
    scanf("%d", &select);
    if(select == 1){
        if(money<5){
            printf("Not enough money!\n");
        }
        else if(money>=5){
            printf("Here you are! and your charge is £%d\n", money-5);
        }
    }

    if(select == 2){ 
       if(money<7){
            printf("Not enough money!\n");
        }
        else if(money>=7){
            printf("Here you are! and your charge is £%d\n", money-7);
        }
    }

    if(select == 3){
        if(money<13){
            printf("Not enough money!\n");
        }
        else if(money>=13){
            printf("Here you are! and your charge is £%d\n", money-13);
        }
    }

    return 0;
}
``` 
