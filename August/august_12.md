# Loop Statement 1

1. Exercises 
- Print out numbers from 10 to 15
- print out numbers from 5 to -5(backwards)
- Print out even numbers from 1 to 10

2. Answers

- 

```c
#include <stdio.h>

int main(){
    int n  = 10;
    while(n < 16){
        printf("%d ", n);
        n = n + 1;
    }    
    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int n = 5;
    while(n > -6){
        printf("%d ", n);
        n = n - 1;
    }
    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int n = 0;
    while(n < 11){
        if(n % 2 == 0){
            printf("%d ", n);
            n = n + 1;
        }
        else if(n % 2  != 0){
            n = n + 1;
        }
    }
    return 0;
}
```
