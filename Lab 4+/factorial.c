#include <stdio.h>

int main(){
    long n, sum = 1;
    printf("Input a number : ");
    scanf("%d", &n);
    // for(long i = 1; i <= n; i++){
    //     sum *= i;
    // }

    
    printf("Factorial of %d is %d", n, sum);
    return 0;
}