# Loop Statements 4

1. Exercises 
- Make shopping mall menu
    - 1) Men's 2) Women's 3) Exit
    - 1-1) T-shirts 1-2) Pants 1-3) Back
    - 2-1) T-shirts 2-2) Skirts 2-3) Back

2. Answers

- 

```c
#include <stdio.h>
//Shopping mall
int main(){
    int n = 1;
    while(n==1){
        printf("=======Shopping Mall ============\n");
        printf("1. Men's 2. Women's 3. Exit\n");
        int sel; scanf("%d", &sel);
        if(sel == 1){
            int n1 = 1;
            while(n1 == 1){
                printf("=======Men's Clothes========\n");
                printf("1. T-shirts 2. Pants 3. Back\n");
                int sel1; scanf("%d", &sel1);
                if(sel1 == 1){printf("T-shirts\n");}
                if(sel1 == 2){printf("Pants\n");}
               if(sel1 == 3){
                    n1 = 0;
                }
            }
        }
        else if(sel == 2){
            int n2 = 1;
            while(n2 == 1){
                printf("=======Women's Clothes========\n");
                printf("1. T-shirts 2. Skirts 3. Back\n");
                int sel2; scanf("%d", &sel2);
                if(sel2 == 1){printf("T-shirts\n");}
                if(sel2 == 2){printf("Skirts\n");}
                if(sel2 == 3){
                    n2 = 0;
                }
            }
        }
        else if(sel == 3){
            printf("Goodbye!");
            n = 0;
        }
    }

    return 0;
}
``` 
