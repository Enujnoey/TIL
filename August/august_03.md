# Variables

1. Exercises
- Calulate the area of a rectangle with a width of 7, and a height of 3.
- Calculate the average score of three subjects (Subject 1 : 20, Subject 2 : 43, Subject 3 : 71)
- Divide $1,868 into each bills ($100, $50, $10 $5, $1)
- Exchange values between two variables

2. Answers

```c
#include <stdio.h>

int main(){

    float width;
    width = 7;
    float height;
    height = 3;
    float area;
    area = width * height;
    printf("the area is %.2f\n", area);

    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    float score1; float score2; float score3; float avg;
    score1 = 20;
    score2 = 43;
    score3 = 71;
    avg = (score1 + score2+ score3)/3;
    printf("Average score : %.2f\n", avg);

    reurn 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int money = 1868;
    int b100; int b50; int b10;
    int b5; int b1;
    b100 = 1868 / 100;
    b50 = (1868%100)/50;
    b10 = (1868%50)/10;
    b5 = (1868%10)/5;
    b1 = (1868%5)/1;

    printf("$100 : %d, $50 : %d, $10 : %d, $5 : %d, $1 : %d\n", b100, b50, b10, b5, b1);

    return 0;
}
```

- 

```c
#include <stdio.h>

int main(){
    int x = 10;
    int y = 20;
    int z;

    z = x;
    x = y;
    y = z;
    printf("x : %d, y : %d\n", x, y);
    
    return 0;
}
```t
