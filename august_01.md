# printf()

1. printf()

```c
#include <Windows.h>
#include <stdio.h>

void main{
    printf("Allons-y"); printf("\n");
    printf("Geronimo!"); printf("\n");
    printf("Exterminate!"); printf("\n");
    printf("You will be upgraded."); printf("\n");

    system("pause");
}
```

2. Data type

```c
#include <Windows.h>
#include <stdio.h>

void main{
    printf("============ Integer ============");printf("\n");
    printf("%d" , 3 + 3);	printf("\n");

	// # print float type  %f
    printf("============ Float ============");printf("\n");
    printf("%f" , 3.3 + 5.3);	printf("\n");

	// # print one character %c
	// when you print out a character, you should used with '' not ""
    printf("============ Character ============");printf("\n");
    printf("%c , 'a'); printf("\n");
    printf("a");printf("\n");

	// # 문자열 출력 %s
	// "" When you print out strings, you can use ""
    printf("============ String ============");printf("\n");
    printf("%s" , "abcde"); printf("\n");
    printf("abcde"); printf("\n");

	system("pause");
}
```
