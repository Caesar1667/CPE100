#include <stdio.h>

int pascals(int row, int column){
    if(row == column || column == 0 ){
     return 1;
    }else{ 
        return pascals(row - 1, column - 1) + pascals(row - 1, column);
    }
}

int main(){
    int n, m, k;
    scanf("%d", &n);

    for(k = 0; k < n; k++){
        for(m = 0; m <= k; m++){
            int f = pascals(k, m);
            printf("%d ", f);
        }
        printf("\n");
    }
}