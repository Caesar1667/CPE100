#include <stdio.h>
#include <stdbool.h>

int lastOne(int num){
    if(num <= 3){
        return true;
    }else{
        if(num % 4 == 0){
            return false;
        }else{
            return true;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if(lastOne(n) == 1){
        printf("True");
    }else{
        printf("False");
    }
}