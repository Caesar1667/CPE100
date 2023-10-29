#include <stdio.h>

int LeastCommonMultiple(int a, int b){
    if(a < 1 || b < 1){
        return 0;
    }
    int t = a % b;
    if(t == 0){
        return a;
    }
    return a * LeastCommonMultiple(b, t) / t;
}

int main(){
    int n,m; scanf("%d%d", &n, &m); 
    if(LeastCommonMultiple(n, m) == 0){
        printf("ERROR");
    }else{
    printf("%d", LeastCommonMultiple(n, m));
    }
}