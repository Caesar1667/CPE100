#include <stdio.h>
#include <stdlib.h>

int sort(int arr[], int n){
	int i, key, j;
	for(i = 1; i < n; i++){ //i is the index in front, while j is the comparing arr
		key = arr[i]; //key will be temporary number to hold the current number we comparing
		j = i - 1;

		while(j >= 0 && arr[j] > key){ //check if behind is more than in front
			arr[j + 1] = arr[j]; //swap position
			j = j - 1; // check again if behind is more than in front
		}
		arr[j + 1] = key;
	}
	// for(i = 0; i < n; i++){
	// 	if(arr[i] == 0){
	// 		count++;
	// 	}
	// }
	// if(count == 1){
	// for(i = 0; i < n; i++){
	// 	if(arr[i] == 0){
	// 		key = arr[i+1];
	// 		arr[i+1] = arr[i];
	// 		arr[i] = key;
	// 		break;
	// 	}
	// }
	// }else if(count > 1){
	// for(i = 0; i < n; i++){
	// 	if(arr[i] >  0){
	// 		arr[0] = arr[i];
	// 		arr[i] = 0;
	// 		break;
	// 	}
	// }
	// }
    for(i = 0; i < n; i++){
        if(arr[i] == 0){
            count++;
        }else if(arr[i] != 0 && count > 0){
            arr[0] = arr[i];
            arr[i] = 0;
            break;
        }
    }
}
void PrintArray(int arr[], int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d", arr[i]);
}
void InputArray(){
	int n;
	scanf("%d" , &n); int m[n];
	for(int i = 0; i < n; i++)
		scanf("%d" , &m[i]);
	sort(m, n);
	PrintArray(m, n);
}

int main(){
	InputArray();
	return 0;
}
