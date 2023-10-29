#include <stdio.h>

int main(){
    int n, a = 1,b = 0,c = 1;
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        printf("%d ", a);
        a = b + c;
        b = c;
        c = a;
    }
        return 0;
}