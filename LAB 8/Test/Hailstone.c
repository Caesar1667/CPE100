#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    while(n != 1){
        if(n == 1){
            printf("%d\n", 1);
        }else if(n % 2 == 0){
            n = n/2;
            printf("%d\n", n);
        }else if(n % 2 != 0){
            n = 3*n + 1;
            printf("%d\n", n);
        }
    }
}