# Loop Statement 3

1. Exercises 
- Make a program that take a number and print out whether the number is the prime # or not

2. Answers

- 

```c
#include <stdio.h>

int main(){
    int count = 0;
    int div = 1;
    int num;
    printf("Type a number: ");
    scanf("%d", &num);
    while(div <= num){
        if(num % div == 0){
            count++;
        }
        div += 1;
    }
    if(count == 2){
        printf("Prime!\n");
    }
    else{
        printf("Not prime!\n");
    }
    return 0;
}
```
