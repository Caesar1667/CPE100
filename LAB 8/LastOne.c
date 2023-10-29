#include <stdio.h>
int LastOne(int arr[], int size){
    int arr2[size / 2], k = 0;
    if(size == 1) {
        printf("%d", arr[0]);
        return 0;
    }
    int arr2[size / 2], i;
    for(i = 1; i < size; i += 2){
        arr2[k] = arr[i];
        k++;
    }
    LastOne(arr2, size/2);
}

int main(){
    int n, i, k = 0;
    scanf("%d", &n);
    int m[n];
    for(i = 0; i < n; i++){
        m[i] = i+1;
    }
    while(n != 1){
        int k = 0;
        for(i = 1; i < n; i += 2){
            m[k] = m[i];
            k++;
        }
        n /= 2;
    }
    printf("%d", m[0]);
    return 0;
}
