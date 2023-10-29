#include <stdio.h>
#include <string.h>

int pascal(int n, int i){
    if(n == i || i == 0) return 1;
    else return pascal(n - 1, i) + pascal(n - 1, i - 1);
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        for(int space = 1; space <= n - i; space++) printf("  ");
        for(int j = 0; j <= i; j++){
            printf("%4d", pascal(i, j));
        }
        printf("\n");
    }
    return 0;
}