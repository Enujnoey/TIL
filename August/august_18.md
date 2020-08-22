# Loop Statement 7

1. Exercises 
- Make ATM Features
    - Sign in - stored id in log(1111, 2222)
    - Log out : log = -1;
    - Check balance - only for people who logged in

2. Answers

- 

```c
#include <stdio.h>
int main(){
    // ATM 
    // 1. Log in ==>  Store ID
    // 2. Log out ==> log = -1;
    // 3. Check balance ==> you should log in first 
    int db_id1 = 1111; int db_id2 = 2222;
    int db_m1 = 1000; int db_m2 = 2000; 
    int log = -1;
    int run = 1;
    while(run == 1){
        if(log == -1){
            printf("Please Log in first "); printf("\n");
    }
        else{
            printf("[%d] Log in processing... ", log); printf("\n"); 
        }
        printf("=============== mega atm ==============="); printf("\n");
        pintf("1. Log in 2. Log out 3. Check balance\n");
		
        int sel; scanf("%d" , &sel);
        if(sel == 1){
            printf("Type your ID: ");
            int tempid;
            scanf("%d", &tempid);
            if(tempid == db_id1){
                log = db_id1;
            }
            else if(tempid == db_id2){
                log = db_id2;
            }
            else{
                log = -1;
            }
        }
        else if(sel == 2){
            log = -1;
        }
        else if(sel == 3){
            if(log != -1){
                if(log == db_id1){
                    printf("Balance: %d\n", db_m1);
                }
                else if(log == db_id2){
                    printf("Balance: %d\n", db_m2);
                }
            }
        }
    }
    return 0;
}
```
