# Loop Statement 6

1. Exercises 
- Baskin Robbins game
    - Take 1 numbers between 1 to 3 from each player
    - if the sum of every suggested numbers is more than 31, the game ends
    - if the end turn is player 1's turn, player 2 win, and vice versa.

2. Answers

- 

```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num1; int num2; int br;
    int run = 1;
    int turn = 0;
    br = 0; //if you don't write this code, you will occur "runtime error"
    while(run == 1){
        if(turn==0){
            printf("[Player1] Type a number from 1 to 3: ");
            scanf("%d", &num1);
            br = br + num1;
            turn = 1;
        }

        else if(turn==1){
            printf("[Playe2] Type a number from 1 to 3: ");
            scanf("%d", &num2);
            br = br + num2;
            turn = 0;
        }

        if(br>=31){
            if(turn==0){
            printf("Player 1 Win!\n");
            }
            else if(turn==1){
                printf("Player 2 Win!\n");
            }
        run = 0;
        }
    }
}
```
