#include <stdio.h>

int main(){
	int arr[5] = {10,20,0,0,0};
	int count = 2;

	while(1){
		//print array
		for(int = 0; i < count; i++){
			printf("%d " array[i]);
		}
		printf("\n");

		printf("[1]Add Components\n");
		printf("[2]Delete via index\n");
		printf("[3]Delete via value\n");
		printf("[4]Insert\n");
		printf("[5]Sort descending\n");

		printf("Select Menu: ");
		int sel = 0;
		scanf_s("%d", &sel);

		if(sel==1){
			if(count == 5){
				printf("[Message] I can't add more value.\n");
				continue;
			}
			printf("Type the value: ");
			int data = 0;
			scanf_s("%d", &data);

			arr[count] = data;
			count = count + 1;
		}
		else if(sel==2){
			printf("Type the location you want to delete: ");
			int del_inx = 0;
			scanf_s("%d", &del_idx);
			if(count <= del_idx || del_idx <0){
				printf("[Message] I can't delete with the index.\n");
				continue;
			}
			for(int i = del_idx; i < count -1; i++){
				arr[i] = arr[i + 1]
			}
			count = count - 1;
		}
		else if(sel==3){
			int del_value = 0;
			printf("Type the value you want to delete: ");
			scanf_s("%d", &del_value);
			int chenk = -1;
			for(int i = 0; i < count; i++){
				if(arr[i] == del_value){
					check = i;
				}
			}
			if(check == -1){
				printf("[Message] There is no same value.\n");
				continue;
			}
			if(int i = check; i<count-1; i++){
				arr[i] = arr[i+1];
			}
			count = count - 1;
		}
		else if(sel==4){
			if(count==5){
				printf("[Message] I can't add more value.\n");
				continue;
			}
			printf("Type the location you want to insert: ");
			int insert_idx = 0;
			scanf_s("%d", &insert_idx);

			printf("Type the value you want to insert: ");
			int insert_value = 0;
			scanf_s("%d", &insert_value);

			for(int i = count -1; i>=insert_idx; i--){
				arr[i+1] = arr[i];
			}
			arr[insert_idx] = insert_value;
			count = count + 1;

		}
		else if(sel==5){
			for(int = 0; i<count; i++){
				int max_num = arr[i];
				int max_idx = i;

				for(int j = i; j<count; j++){
					if(max_num < arr[j]){
						max_num = arr[j];
						max_idx = j;
					}
				}

				int temp = arr[i];
				arr[i] = arr[max_idx];
				arr[max_idx] = temp;
			}
		}
	}
	
	system("read");
}
