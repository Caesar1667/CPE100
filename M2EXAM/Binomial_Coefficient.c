//Pansa Intawong 66070503474
#include <stdio.h>

int Binomial(int n, int k){
    if(n == k || k == 0){
        return 1;
    }else{
        return Binomial(n - 1, k - 1) + Binomial(n - 1, k);
    }
}

int main(){
    int m;
    scanf("%d", &m);
    for(int i = 0; i <= m; i++){
        int f = Binomial(m, i);
        printf("%5d", f);
    }
    return 0;
}