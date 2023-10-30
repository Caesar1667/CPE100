//Pansa Intawong 66070503474
#include <stdio.h>

int Cube(int num){
    return num * num * num;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", Cube(n));
    return 0;
}