#include <stdio.h>

int main(){
    int n,m,i; scanf("%d%d", &n, &m);
    int arr[100], sum = 0, j = 0;
    for(i = 1; i <= n;i++){
        if(n % i == 0){
            printf("%d ", i);
            arr[j] = i;
            n /= i;
            j++;
        }
    }
    for(i = 0; i < j; i++){
        sum += arr[i];
    }
    printf("%d ", sum);
    if(sum == m){
        puts("It fucking perfect.");
    }else{
        puts("This shit's ass.");
    }
}