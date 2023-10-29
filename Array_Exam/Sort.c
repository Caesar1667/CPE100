#include <stdio.h>
//Pansa Intawong 66070503474
void sort(int m[], int size){
    int hold;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(m[j] > m[j + 1]){
                hold = m[j];
                m[j] = m[j + 1];
                m[j + 1] = hold;
            }
        }
    }
}

int main(){
    int n; scanf("%d", &n);
    int m[n];
    for(int i = 0; i < n; i++) scanf("%d", &m[i]);
    sort(m, n);
    for(int i = 0; i < n; i++) printf("%d\n", m[i]);
    return 0;

}