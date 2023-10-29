#include <stdio.h>
int brainmelt(int i, int j){

}
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int x[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int a,b;
    scanf("%d%d", &a, &b);
    int y[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &y[i][j]);
        }
    }

    if(m != a){
        printf("ERROR");
        return 0;
    }
    int z[n][b];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < b; j++){
            z[i][j] = 0;
            for(int k = 0; k < n; k++){
            z[i][j] += x[i][k] * y[k][j];
            }

            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}