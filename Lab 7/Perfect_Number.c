#include <stdio.h>

int PerfectNum(int begin, int last){
    int count = 0;
    for(int k = begin; begin <= last; begin++){
    int sum = 0;
        for(int i = 1; i < begin; i++){
            if(begin % i == 0)
                sum += i;
        }
        if(sum == begin){
            printf("%d\n", begin);
            count++;
        }
    }
    return count;
}

int main(){
    int n,m; scanf("%d%d", &n, &m);
    if(n == 0){
        n++;
    }
    int result = PerfectNum(n,m);
    if(result == 0)
        printf("None");
    return 0;
}