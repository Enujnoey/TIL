# printf()

1. printf()

```c
#include <stdio.h>

int main{
    printf("Allons-y"); printf("\n");
    printf("Geronimo!"); printf("\n");
    printf("Exterminate!"); printf("\n");
    printf("You will be upgraded."); printf("\n");

    return 0;
}
```

2. Data type

```c
#include <stdio.h>

int main{
    printf("============ Integer ============");printf("\n");
    printf("%d" , 3 + 3);	printf("\n");

	// # print float type  %f
    printf("============ Float ============");printf("\n");
    printf("%f" , 3.3 + 5.3);	printf("\n");

	// # print one character %c
	// when you print out a character, you should used with '' not ""
    printf("============ Character ============");printf("\n");
    printf("%c" , 'a'); printf("\n");
    printf("a");printf("\n";

	// # 문자열 출력 %s
	// ""
    printf("============ String ============");printf("\n");
    printf("%s" , "abcde"); printf("\n");
    printf("abcde"); printf("\n");

    return 0;
}
```)
