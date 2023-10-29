#include <stdio.h>
#include <string.h>

char Palindrome(char string[], int start, int end){
    if(start >= end){
        return 1;
    }else if(string[start] != string[end]){
        return 0;
    }

    return Palindrome(string, start + 1, end - 1);
}

int main(){
    char n[100]; scanf("%s", &n);
    int length = strlen(n);
    if(Palindrome(n, 0, length - 1) == 1){
        puts("Yes");
        printf("Reverse of %s is also %s", n, n);
    }else{
        puts("No");
        printf("Reverse of %s is not %s", n, n);
    }
    return 0;
}