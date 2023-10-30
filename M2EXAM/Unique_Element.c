    //Pansa Intawong 66070503474
    #include <stdio.h>

    void sort(int arr[], int size){
        int hold;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size - 1; j++){
                if(arr[j] > arr[j+1]){
                    hold = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = hold;
                }
            }
        }
    }

    int Unique(int arr[], int size){
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                if(arr[i] == arr[j]){
                    return 0;
                }
            }
        }
        return 1;
    }

    int main(){
        int n;
        scanf("%d", &n);
        int x[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &x[i]);
        }
        if(Unique(x, n)){
            printf("True");
        }else{
            printf("False");
        }
        return 0;
    }