#include <stdio.h>
#include <string.h>

void sort(char arr[], int size){
    char hold[100];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                hold[j] = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = hold[j];
            }
        }
    }
}

int Transform(char arr[], char arr2[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char STR1[100], STR2[100];
    scanf("%s", STR1);
    scanf("%s", STR2);
    int size1 = strlen(STR1);
    int size2 = strlen(STR2);
    if(size1 != size2){
        printf("False");
    }
    sort(STR1, size1);
    sort(STR2, size2);
    int n = Transform(STR1, STR2, size1);
    if(n == 1){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}