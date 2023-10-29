#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m[n];
    for(int i = 0; i < n; i++) scanf("%d", &m[i]);
    int freq = 0, max = 0, temp, temp2;
    for(int i = 0;i < n; i++){
        freq = 0;
        for(int j = 0; j < n; j++){
            if(m[i] == m[j]) freq++;
        }
        if(freq > max){
            max = freq;
            temp = m[i];
        }
        if(freq == max && m[i] != temp){
            temp2 = m[i];
        }else{
            temp2 = 9000;
        }
    }

    if(temp2 == 9000){
        printf("%d", temp);
    }else{
        printf("%d %d", temp, temp2);
    }
    return 0;
}