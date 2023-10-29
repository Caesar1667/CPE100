#include <stdio.h>

int GDP(int a, int b){
    while(a != b){
        if(a > b)
            return GDP(a-b, b);
        else
            return GDP(a, b-a);
    }
    return a;
}

int main(){
    int n, m; scanf("%d%d", &n, &m);
    printf("%d", GDP(n, m));
    return 0;
}