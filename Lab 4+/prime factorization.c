#include <stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    while(n%2==0){
        printf("%d *", 2);
        n /= 2; 
    }
    for(i = 3; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
            n /= i;
            if(n > 1){
                printf("*"); 
            }
            
        }

        
    }
    if(n > 2){
            printf("%d ", n);
        }
        return 0;
}