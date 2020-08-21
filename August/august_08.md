# Conditional Statement 3

1. Exercises 
- Making a "Rock Scissors Paper" game
- Set player 1 and player 2
- Print out the result

2. Answers

- 

```c
#include <stdio.h>

int main(){
    int p1; int p2; int rock = 1; int scissors = 2; int paper = 3;
    printf("p1 ==> 1.rock 2.scissors 3.paper"); printf("\n");
    scanf("%d", &p1);

    printf("p2 ==> 1.rock 2.scissors 3.paper"); printf("\n");
    scanf("%d", &p2);

    if(p1-p2 == 0){
		    printf("Draw!"); printf("\n");
    }
    if(p1 =! p2){
        if(p1+p2 == scissors+paper){
            if(p1-p2<0){
                printf("player1 Won!");
            }
            else if(p1-p2>0){
                printf("player2 Won!");
            }
        }
        if(p1+p2 == rock+paper){
            if(p1-p<0){
                printf("player2 Won!");
            }
            else if(p1-p2>0){
                printf("player1 Won!");
            }
        }
        if(p1+p2 == rock+scissors){
            if(p1-p2<0){
                printf("player1 Won!");
            }
            else if(p1-p2>0){
                printf("player2 Won!");
            }
        }
    }

    return 0;
}
```
