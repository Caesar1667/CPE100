#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	int m[n];
	for(i = 0; i < n; i++){
		scanf("%d", &m[i]);
	}
	if(n < 2){
		printf("%d\n%d", m[0], 0);
		return 0;
	}
	int Temp1 = m[0], Temp2 = m[1];
	int CloseZero = 9999, sum;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			sum = m[i] + m[j];
			int absSUM = abs(sum);
			if(absSUM < CloseZero){
				CloseZero = absSUM;
				Temp1 = m[i];
				Temp2 = m[j];
			}
		}
	}
	printf("%d\n%d", Temp1, Temp2);
	return 0;
}