#include <stdio.h>

int main(){
    int n, sum;
    printf("Input a number : ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    printf("Summation from 1 to %d is %d", n, sum);
    return 0;
}