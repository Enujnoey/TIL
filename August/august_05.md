# Conditional Operator

1. Exercises 
- print out 1 if the input number is in the range of 60 ~ 100
- take 2 scores and calculate an average, and print out 1  if the average is more than 60( if one of the number is less than 50, print 0)

2. Answers

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", 60<=a && a <= 100);
    system("pause");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){

    int score1; int score2;
    printf("Type Score 1: ");
    scanf_s("%d", &score1);
    printf("\n"); 
    printf("Type Score 2: ");
    scanf_s("%d", &score2);
    printf("\n");

    int avg;
    avg = (score1 + score2)/2
    printf("%d\n", 60 <= avg && 50 < score1 && 50 < score2);

    system("pause");
}
```
