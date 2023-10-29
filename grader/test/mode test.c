#include <stdio.h>

int main(){
    int n, i, count;
    scanf("%d", &n);
    int num[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
     int maxCount = 0;
    int currentCount = 0;
    int modes[n];
    
    for (int i = 0; i < n; i++) {
        currentCount = 0;
        
        for (int j = 0; j < n; j++) {
            if (num[i] == num[j])
                currentCount++;
        }
        
        if (currentCount > maxCount) {
            maxCount = currentCount;
            modes[0] = num[i];
        } else if (currentCount == maxCount && currentCount > 1) {
            modes[currentCount - 1] = num[i];
        }
    }
    
    if (maxCount == 1) {
        printf("NONE\n");
    } else {
        for (int i = 0; i < maxCount; i++) {
            printf("%d ", modes[i]);
        }
        printf("\n");
    }

    // int mode = num[0], maxCount = 0, modeCount = 0, modes[n];
    // for(int i = 0; i < n; i++){
    //     int count = 1;

    //     for(int j = 0; j < n; j++){
    //         if(num[j] == num[i])
    //         count++;
    //         }

    //     if(count > maxCount){
    //         mode = num[i];
    //         maxCount = count;
    //         modeCount = 1;
    //         modes[0] = mode;
    //     }else if(count == maxCount){
    //         modeCount++;
    //         modes[modeCount - 1] = num[i];
    //     }
       
    //     }
    //     for(int i = 0; i < modeCount; i++){
    //         printf("%d ", modes[i]);
    //     }
        // maxCount = 0;
        // for(int i = 0; i < n; i++){
        //     int count = 0;
        //     for(int j = 0; j < n; j++){
        //         if(freq[i] == freq[j])
        //             count++;
        //     }
        //     if(count > maxCount){

        //     }
        // }
        // for(int i = 0; i < n; i++){
        //     printf("%d ", freq[i]);
        // }
        
        // printf("%d ", mode);

        
        return 0;
    }

