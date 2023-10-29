#include <stdio.h>

int main(){
int n;
scanf("%d", &n);
int sum = 1;
for(int i = 2; i < n; i++){
    if(n % i == 0){
        sum += i;
    }
}
printf("%d ", sum);
}