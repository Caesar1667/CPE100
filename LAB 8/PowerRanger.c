#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exponential){
    if(exponential == 0){
        return 1;
    }else{
    return base * Power(base, exponential - 1);
    }
}
int CheckPow(int n, int m){
    int i = 0;
    while(Power(n, i) < m){
        i++;
    }
    if(m == Power(n, i)){
        printf("True\n");
        return 1;
    }else{
        printf("False\n");
        return 0;
    }
}

int main(){
    int n; scanf("%d", &n);
    // int m = abs(n);
    CheckPow(2, n);
    CheckPow(3, n);
    CheckPow(4, n);
    return 0;
}