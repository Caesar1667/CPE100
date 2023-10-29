#include <stdio.h>

int PerfectNum(int begin, int last){
    while(begin <= last){
    int TempBegin = begin;
        int arr[100], j = 0;
        while(TempBegin % 2 == 0){
            arr[j] = 2;
            TempBegin /= 2;
            j++;
        }
    for(int i = 3; i <= TempBegin;i++){
        if(TempBegin % i == 0){
            arr[j] = i;
            TempBegin /= i;
            j++;
        }
    }
    if(TempBegin > 2)
        arr[j] = TempBegin;
    int sum = 1;
        for(int i = 0; i <= j; i++){
            sum += arr[i];
        }
        printf("(%d,%d) ", begin, sum);
        if(sum == begin){
            // printf("%d\n", begin);
        }
        begin++; 
        TempBegin = begin;
    }
}

int main(){
    int n, m; scanf("%d%d", &n, &m);
    PerfectNum(n, m);
    return 0;
}