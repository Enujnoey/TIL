# Input Value

1. Exercises 
- Get one number and print out if it is more than 60
- Get second and print out with number and second format(0000 sec >> 00min 00sec)
- get two number and print out 1 if the second value is bigger
- get two number and print out 1 if the number is even

2. Answers

- 

```c
#include <stdio.h>

int main(){
    int num1;
    scanf("%d", &num1);
    printf("Pass: %d", num1 >= 60); printf("\n");

    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int num2;
    printf("Type Seconds: ");
    scanf("%d", &num2);
    int min; int sec;
    min = num2 / 60;
    sec = num2 % 60;
    printf("%d Seconds >>> %d min %d sec", num2, min, sec);

    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int num1; int nm2;
    printf("Type number 1: ");
    scanf("%d", &num1);
    printf("Type number 2: ");
    scanf("%d", &num2);
    printf("Is Number 2 bigger than Number 1? : %d", num2 > num1);
    
    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int num;
    printf("Type number: ");
    scanf("%d", &num);
    printf("The number is even: %d\n", num%2 == 0);

    return 0;
}
```u
