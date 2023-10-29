#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int m[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &m[i]);
	}
	int min = m[0], secmin = 9999;

	for(int i = 1; i < n; i++){
		if(m[i] < min){
			min = m[i];
		}
	}
	int index = 0;
	for(int i = 0; i < n; i++){
		if(m[i] < secmin && m[i] != min){
			secmin = m[i];
			index = i;
		}
	}
	printf("%d\n%d", secmin, index);
	return 0;
}
