# Input Value

1. Exercises 
- Get one number and print out if it is more than 60
- Get second and print out with number and second format(0000 sec >> 00min 00sec)
- get two number and print out 1 if the second value is bigger
- get two number and print out 1 if the number is even

2. Answers

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    int num1;
    scanf_s("%d", &num1);
    printf("Pass : %d", 60 <= a); printf("\n");
    system("pause");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    int num2;
    printf("Type Seconds: ");
    scanf_s("%d", &num2);
    int min; int sec;
    min = num2 / 60;
    sec = num2 % 60;
    printf("%d Seconds >>> %d min %d sec", num2, min, sec);
    system("pause");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    int num1; int num2;
    printf("Type number 1: ");
    scanf_s("%d", &num1);
    printf("Type number 2: ");
    scanf_s("%d", &num2);
    printf("Number 2 is bigger than Number 1: %d\n", num2 > num1);

	system("pause");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    int num;
    printf("Type number: ");
    scanf_s("%d", &num);
    printf("The number is even: %d\n", num%2 == 0);

    system("pause");
}
```
