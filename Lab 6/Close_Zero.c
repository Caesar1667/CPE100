#include <stdio.h>
#include <stdlib.h>

int abs(int x){
    if(x < 0){
        x = x * -1;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int m[n];
    for(int i = 0; i < n; i++){
        scanf("%d", m[i]);
    }
    int Temp1 = m[0], Temp2 = m[1], CloseZero = 9999, sum;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n; j++){
            sum = abs(m[i] + m[j]);
            
        }
    }
}