#include <stdio.h>

int main(){
    int c, number, Prime, j = 0;
    printf("Enter the number to print out prime nuber : ");
    scanf("%d", &number);
    for(c = 2; c <= number; c++){
        Prime = 0;
        for(int i = 2; i <= c/2; i++){
            if(c % i == 0){
                Prime++;
                break;
            }
        }
        if(Prime == 0){
            printf("%d ", c);
            j++;
        }
        if(j == 10){
            printf("\n");
        }
    }
    
    
    return 0;
}
