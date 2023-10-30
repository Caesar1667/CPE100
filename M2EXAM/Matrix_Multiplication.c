//Pansa Intawong 66070503474
#include <stdio.h>

// int MatrixMulti(int x[][], int y[][], int n, int m, int a, int b){
//     if(m != a){
//         printf("ERROR");
//         return 0;
//     }else{
//         int MatC[n][b];
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < b; j++){
//                 MatC[i][j] = 0;
//                 for(int k = 0; k < n; k++){
//                     MatC[i][j] += x[i][k] * y[k][j];
//                 }
//                 printf("%d ", MatC[i][j]);
//             }
//             printf("\n");
//         }
//     }
// }

int main(){
    int n,m, i, j;
    scanf("%d%d", &n, &m);
    int x[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d" , &x[i][j]);
        }
    }
    int a,b;
    scanf("%d%d", &a, &b);
    int y[a][b];
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            scanf("%d", &y[i][j]);
        }
    }
    if(m != a){
        printf("ERROR");
        return 0;
    }
        int MatC[n][b];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < b; j++){
                MatC[i][j] = 0;
                for(int k = 0; k < n; k++){
                    MatC[i][j] += x[i][k] * y[k][j];
                }
                printf("%d", MatC[i][j]);
                if(j < b - 1){
                    printf(" ");
                }
            }
            if(i < n - 1)
            printf("\n");
        }
    return 0;
}