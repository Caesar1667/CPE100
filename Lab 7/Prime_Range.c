#include <stdio.h>

int PrimeRange(int begin, int last){
    int Prime = 0, count = 0;
    if(begin < 2){
        begin = 2;
    }
    while(begin <= last){
        for(int i = 2; i < begin; i++){
            Prime = 0;
            if(begin % i == 0){
                Prime = 1;
                break;
        }   
            }
        if(Prime == 0){
            count++;
            printf("%d\n", begin);
        }
        begin++;
    }
    return count;
}
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int result = PrimeRange(n,m);
    if(result == 0)
        printf("None");
    return 0;
}