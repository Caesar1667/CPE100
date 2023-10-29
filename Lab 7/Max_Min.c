#include <stdio.h>

int Maximum(int num[], int n){
    int max = num[0];
    for(int i = 0; i < n; i++){
        if(num[i] > max)
            max = num[i];
    }
    return max;
}
int Minimum(int num[], int n){
    int min = num[0];
    for(int i = 0; i < n; i++){
        if(num[i] < min)
            min = num[i];
    }
    return min;
}

int main(){
    int n;
    scanf("%d", &n);
    int m[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    int min = Minimum(m, n), max = Maximum(m, n);
    printf("%d\n%d", max, min);
    return 0;
}