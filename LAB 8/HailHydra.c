#include <stdio.h>

int Hailstone(int n){
    if(n == 1){
        printf("1\n");
        return 1;
    }
    printf("%d\n", n);
    if(n % 2 == 0){
        return Hailstone(n/2);
    }else if(n % 2 != 0){
        return Hailstone(3*n+1);
    }
}

int input(){
    int n; scanf("%d", &n); return n;
}
int main(){
    int a; scanf("%d", &a);
    Hailstone(a);
}