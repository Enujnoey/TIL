# Conditional Statement 5

1. Exercises 
- Times table question
    - Give questions randomly from 2 times to 9 times table
    - Take an answer
    - Print out a result

2. Answers

- 

```c
*#*include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); //rand()
    //print our random questions >>> type answer >>> print out results
    int a = rand() % 8 + 2;
    int b = rand() % 9 + 1;
    printf("Question : %d x %d = ?", a, b); printf("\n");

    int answer;
    scanf("%d", &answer);
    int c = a*b;

    if(c == answer){
        printf("That's correct!"); printf("\n");
    }
    if(c != answer) {
        printf("Wrong!"); printf("\n");
    }
    return 0;
}
```
