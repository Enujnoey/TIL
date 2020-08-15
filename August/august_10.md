# Conditional Statement 5

1. Exercises 
- Times table question
    - Give questions randomly from 2 times to 9 times table
    - Take an answer
    - Print out a result

2. Answers

- 

```c
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(0)); //rand()
    //print our random questions >>> type answer >>> print out results
    int a = rand() % 8 + 2;
    int b = rand() % 9 + 1;
    printf("Question : %d x %d = ?", a, b); printf("\n");

    int answer;
    scanf_s("%d", &answer);
    int c = a*b;

    if(c == answer){
        printf("That's correct!"); printf("\n");
    } //when I put a*b on the left side of conditional sentence, error C2107 pops up saying "the left operand should be I-value" ad I dunno what it is about

    if(c != answer) {
        printf("Wrong!"); printf("\n");
    }

    system("pause");
}
```
