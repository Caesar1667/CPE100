#include <stdio.h>
#include <stdlib.h>

int sort(){
    int n;
	scanf("%d" , &n); int m[n];
	for(int i = 0; i < n; i++)
		scanf("%d" , &m[i]);

	int i,key, j;
	for(i = 1; i < n; i++){ //i is the index in front, while j is the comparing m
		key = m[i]; //key will be temporary number to hold the current number we comparing
		j = i - 1;

		while(j >= 0 && m[j] > key){ //check if behind is more than in front
			m[j + 1] = m[j]; //swap position
			j = j - 1; // check again if behind is more than in front
		}
		m[j + 1] = key;
	}
    int count = 0;
    for(i = 0; i < n; i++){
        if(m[i] == 0){
            count++;
        }else if(m[i] != 0 && count > 0){
            m[0] = m[i];
            m[i] = 0;
            break;
        }
    }
    	for(i = 0; i < n; i++)
		printf("%d", m[i]);
}

int main(){
	sort();
	return 0;
}
