#include <stdio.h>

int Power(int base, int exponential){
    if(exponential == 0){
        return 1;
    }else{
        return base * Power(base, exponential - 1);
    }
}

int main(){
    int n, m; scanf("%d%d", &n, &m);
    printf("%d", Power(n, m));
}