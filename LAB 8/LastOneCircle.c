#include <stdio.h>
int Circle(int num[],int size, int count, int start){
    if(size == 1){
        return num[0];
    }
    start = (start + count) % size;
    int arr1[size-1], j = 0;
    for(int i = 0; i < size; i++){
        if(start == i){
            continue;
        }
        arr1[j++] = num[i];
    }
    return Circle(arr1, size-1, count, start);
    
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int m[n], start = 0, i;
    for(int i = 0; i < n; i++) m[i] = i + 1;
    printf("%d", Circle(m, n, k-1, 0));
}
