#include <stdio.h>

int main(){
	int n, j, i;
	scanf("%d", &n);
	int m[n];
	for(i = 0; i < n; i++){
		scanf("%d" , &m[i]);
	}
	if(n == 2){
		if(m[0] > m[1]){
			printf("%d\n%d", m[0], 0);
		}else{
			printf("%d\n%d", m[1], 1);
		}
	}
	int min = m[0], max = 0, sec = 0;
	for(i = 0; i < n; i++){
		if(m[i] > max){
			max = m[i];
		}
		if(m[i] < min){
			min = m[i];
		}
	}
	int TempMax = max, arr[3] = {min, 0, TempMax}, index = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(m[j] > min && m[j] < TempMax){
			arr[1] = m[j];
			index = j;
			}	
		}
		TempMax = arr[1];
	}
	printf("%d\n%d", arr[1], index);
	return 0;
}
