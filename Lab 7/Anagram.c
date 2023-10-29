#include <stdio.h>
int Anagrams(int num1[], int num2[], int size1, int size2){
    if(size1 != size2){
        printf("False");
        return 0;
    }
    int count[2002] = {0};

    for(int i = 0; i < size1; i++){
        count[num1[i]+1000]++;
        count[num2[i]+1000]--;
    }
    for(int i = 0; i < 2002; i++){
        if(count[i] != 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n; scanf("%d", &n); int x[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &x[i]);
    int m; scanf("%d", &m); int y[m];
    for(int i = 0; i < n; i++)
        scanf("%d" ,&y[i]);
    if(n != m){
        printf("False");
        return 0;
    }
    int result = Anagrams(x,y,n,m);
    if(result == 1){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}