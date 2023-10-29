#include <stdio.h>
#include <string.h>

char reverse(char string[], int start, int end){
        if(start >= end){
            return 0;
        }else{
            char temp = string[start];
            string[start] = string[end];
            string[end] = temp;

            reverse(string, start + 1, end - 1);
        }
    }

int main(){
    char n[100]; scanf("%s", &n);
    int length = strlen(n);
    reverse(n, 0, length - 1);
    printf("%s", n);
    return 0;
}