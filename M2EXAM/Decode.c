#include <stdio.h>
#include <string.h>

int main(){
    char n[100];
    scanf("%s", n);
    char m[100];
    int index = 0;
    for(int i = 0; *(n+i) != '\0'; i += 2){
        if(*(n+i) >= '0' && *(n+i) <= '9'){
            char temp[100];
            *temp = *(n+i+1);
            for(int j = 0; j <= n[i] - 48; j++){
                strcat(*(m+index), *(temp+0));
                index++;
            }
        }
    }
    printf("%s", n);
}