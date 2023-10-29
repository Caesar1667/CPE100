#include <stdio.h>

int main(){
    int n;
    printf("Input a number : ");
    scanf("%d", &n);
    int sum[n+2];
    sum[0] = 0; sum[1] = 1;
    for(int i = 0; i < n; i++){
        sum[i+2] = sum[i] + sum[i+1];
        printf("%d ", sum[i+1]);
    }
    return 0;
}   