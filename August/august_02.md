# Arithmetic Operators

1. Exercises
- If the triangle A's width is 3, and height is 7, what is the area of the triangle A?
- If Kim's salary is 1.11 million won per month, what is his annual salary? (Condition : subtract 10% for a tax)
- 100 seconds >> 00min 00sec?
2. Answers
- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    printf("width : %d, height %d, area : %.2f", 3 ,7 , (3*7)/2.0);
    printf("\n");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
printf("salary : %d, tax rate : %d%%, annual salary %.2f: ", 111, 10, (111*12)*0.9);
printf("\n");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    printf("%d seconds >>> %d min %d sec", 100, 100/60, 100%60);
    printf();
}
```
