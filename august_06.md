# Conditional Statement 1

1. Exercises 
- Roller coaster
    - Condition 1: Enter if the height is more than 130cm
    - Condition 2: Enter with parents if the height is more than 120 less than 130
    - Condition 3: Not allowed if the height is 120cm below

2. Answers

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    printf("===Welcome to the Rollervcoaster===\n");;
    int height;
    printf("Enter your height: ");
    scanf_s("%d", height);
    if(130 <= height){
        printf("Please Enter\n");
    }
    else if(120 <= height && height <= 130){
        printf("Please Enter with your parents\n");
    }
    else if(height < 120){
        printf("You are not allowed\n");
    }
    

    system("pause");
}
```
