# Variables

1. Exercises
- Calulate the area of a rectangle with a width of 7, and a height of 3.
- Calculate the average score of three subjects (Subject 1 : 20, Subject 2 : 43, Subject 3 : 71)
- Divide $1,868 into each bills ($100, $50, $20, $10 $5, $2, $1)
2. Answers

```c
#include <Windows.h>
#include <stdio.h>

void main(){

    float width;
    width = 7;
    float height;
    height = 3;
    float area
    area = width * height;
    printf("the area is %.2f", area); printf("\n")

    system("pause");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    float score1; float score2; float score3; float avg;
    score1 = 20;
    score2 = 43;
    score3 = 71;
    avg = (score1 + score2+ score3)/3;
    printf("Average score : %d);

    system("pause");
}
```

- 

```c
#include <Windows.h>
#include <stdio.h>

void main(){
    int money = 1868;
    int b100; int b50; int b20; int b10;
    int b5; int b2, int b1;
    b100 = 1868 / 100;
    b50 = (1868/%100)/50;
    b20 = (1868%50)/20;
    b10 = (1868%20)/10;
    b5 = (1868%10)/5;
    b2 = (1868%5)/2;
    b1 = (1868%5)/1;

    printf("$100 : %d, $50 : %d, $20 : %d, $10 : %d, $5 : %d, $2 : %d, $1 : %d", b100, b50, b20, b10, b5, b2, b1);

    system("pause");
}
```"
