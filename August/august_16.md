# Loop Statement 5

1. Exercises 
- Make 3 random student numbers and their scores(number >>1000 ~ 1002 && Score >> 0 ~ 100)
- Print out the 1st prize student number and the score

2. Answers

- 

```c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int max_num = 0; int max_score = 0;
    for(int number = 1000; number < 1003; number++){
        int tmpscore = rand() % 101;
        if(max_score < tmpscore){
            max_score = tmpscore;
            max_num = number;
        }
        number += 1;
     }
     printf("1st prize: %d Score:  %d\n", max_num, max_score);
     return 0;
}
```
