#include <stdio.h>

int LCD(int a, int b){
    int t = a % b;
    if(t == 0) return a;
    return a * LCD(b, t) / t;
}

int main(){
    int a, b; scanf("%d%d", &a, &b);
    printf("%d", LCD(a, b));
    return 0;
}