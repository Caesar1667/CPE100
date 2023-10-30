//Pansa Intawong 66070503474
#include <stdio.h>

int main(){
    char n[100];
    scanf("%s", n);
    int i = 0;
    while(n[i] != '\0'){
        i++;
    }
    printf("%d", i);
    return 0;
}