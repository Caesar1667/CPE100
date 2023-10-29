#include <stdio.h>

int main(){
    int n, Odd = 0, Even = 0, count = 0;
    do{
        scanf("%d", &n);
        if( n < 1 || n > 100){
            puts("The size you've assigned is over the limit.");
        }
    }while(n > 100 || n < 1);
    int num[n];                                                   
    for(int i = 0; i < n; i++){
        do{
            scanf("%d", &num[i]);
            if( num[i] < -1000 || num[i] > 1000){
                puts("The number you've entered is over the limit.");
            }
        }while(num[i] < -1000 || num[i] > 1000);
    }
    int NumO[n], NumE[n];
    for(int i = 0;i < n; i++){
        if(num[i] % 2 != 0){
            NumO[Odd] = num[i];
            Odd++;
        }else{
            NumE[Even] = num[i];
            Even++;
        }
    }
    if(Odd <= 1){
        printf("None\n");
    }else{
        for(int i = 0; i < Odd; i++){
         printf("%d ", NumO[i]);   
        }
        printf("\n");
    }
    if(Even <= 1){
        printf("None\n");
    }else{
        for(int i = 0; i < Even; i++){
            printf("%d ", NumE[i]);
        }
    }
    return 0;
}