#include <stdio.h>

int Prime(int n){
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int Palindrome(int n){
    int reverse = 0;
    int TempN = n;

    while(TempN != 0){
        int remainder = TempN % 10;
        reverse = reverse * 10 + remainder;
        TempN /= 10;
    }
    return (n == reverse);
}

int main(){
    int n;
    do{
        scanf("%d", &n);
        if(n > 10000 || n < 0){
            puts("The number you've entered is over the limit.");
        }
    }while(n > 10000 || n < 0);

    while(1){
        if(Prime(n) && Palindrome(n)){
            printf("%d", n);
            break;
        }
        n++;
    }
    return 0;
}