#include <stdio.h>

int fibonacci(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);

}

int main(){
    int n, re = 0;
    scanf("%d", &n);
    printf("%d ", fibonacci(n));
    return 0;
}