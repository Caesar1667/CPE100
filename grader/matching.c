#include <stdio.h>

int main(){
    int n,m, same = 0;
    do{
        printf("input the number for set 1 : ");
        scanf("%d", &n);
        if(n < 1 || n > 100){
            puts("The size you've assigned is over the limit.");
        }
    }while(n < 1 || n > 100);
    int Set1[n];
    for(int i = 0; i < n; i++){
        do{
            scanf("%d", &Set1[i]);
            if(Set1[i] < -1000 || Set1[i] > 1000){
                puts("The number you've input is over the limit.");
            }
    }while(Set1[i] < -1000 || Set1[i] > 1000);
    }
    printf("input the number for set 2 : ");
    do{
        scanf("%d", &m);
        if(m < 1 || m > n){
            puts("The size you've assigned is over the limit.");
        }
    }while(m < 1 || m > n);

    int  Set2[m];
    for(int i = 0; i < m; i++){
        do{
            scanf("%d",  &Set2[i]);
            if( Set2[i] < -1000 ||  Set2[i] > 1000){
                puts("The number you've input is over the limit.");
            }
    }while( Set2[i] < -1000 ||  Set2[i] > 1000);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(Set1[i] == Set2[j]){
                same++;
                break;
            }
        }
    }
    if(same == m){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
 
}  
 
