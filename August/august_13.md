# Loop Statement 2

1. Exercises 
- Order 5 times, and print out receipt
    - ex) 2 hamburgers $10, 1 coke $3... etc

2. Answers

- 

```c
#include <stdio.h>

int main(){
    int money = 100;
    int n = 0;
    int c1 = 0; int c2 = 0; int c3 = 0;
    while(n < 5){
        printf("======Lotteria======"); printf("\n");
        printf("1. Hamburger $5"); printf("\n");
        printf("2. Coke $3"); printf("\n");
        printf("3. French Fries $4"); printf("\n");
        printf(" Type the number: ");
        int sel; scanf("%d", &sel);
        if(sel == 1){
            c1++;
            n += 1;
        }

        else if(sel == 2){
            c2++;
            n += 1;
        }
        else if(sel == 3){
            c3++;
            n += 1;
        }
   }
    int change = money - (c1*5 + c2*3 + c3*4);
    printf("%d Hamburgers, %d Coke, %d French Fries, Change : $%d", c1, c2, c3, change);
    printf("\n");
    return 0;
}
``` 
