#include <stdio.h>
#include <string.h>

void sort(char arr[], int size){
    char hold[100];
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                hold[j] = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = hold[j];
            }
        }
    }
}

int Subset(char arr[], char arr2[]){
    if(strstr(arr, arr2) == NULL)
        return 0;
    else
        return 1;
}

int main(){
    char STR1[100], STR2[100];
    scanf("%s", STR1);
    scanf("%s", STR2);
    if(Subset(STR1, STR2) == 1){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}