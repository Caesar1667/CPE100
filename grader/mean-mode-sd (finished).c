#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float sum;
    do{
        scanf("%d", &n);
        if( n < 1 || n > 100){
            puts("The size you've assigned is over the limit.");
        }
    }while(n > 100 || n < 1);
    int x[n];
    for(int i = 0; i < n; i++){
        do{
            scanf("%d", &x[i]);
            if( x[i] < -1000 || x[i] > 1000){
                puts("The xber you've entered is over the limit.");
            }
        }while(x[i] < -1000 || x[i] > 1000);
    }
    //Calculate Mean.
    for(int i = 0; i < n; i++){
       sum += x[i]; 
    }
    sum = sum/n;
    printf("%.2f\n", sum);

    //Calculate Mode.
    int mode[n], maxCount = 1, count = 0, numTrack = 0;
    for(int i = 0; i < n; i++){
        count = 0;

        for(int j = 0; j < n; j++){
            if(x[j] == x[i])
            count++;
            }

        if(count > maxCount){
            mode[0] = x[i];
            maxCount = count;
            numTrack = 1;
        }else if( count == maxCount && count > 1){
            int Track = 0;
            for(int k = 0; k < numTrack; k++){
                if(x[i] == mode[k]){
                    Track = 1;
                    break;
                }
            }
            if(!Track){
                mode[numTrack] = x[i];
                numTrack++;
            }
            // mode[count - 1] = x[i];
        }
        }
        if(numTrack == 1){
            printf("%d\n", mode[0]);
        }else if(numTrack > 1 && numTrack < 3){
            for(int i = 0; i < numTrack; i++){
                printf("%d ", mode[i]);
            }
            printf("\n");
        }else{
            printf("NONE\n");
        }

    //Calculate Standard Deviation.
    float sdsum = 0, sd = 0;
    for(int k = 0; k < n; k++){
        sdsum = sdsum + ((x[k] - sum) * (x[k] - sum));
    }
    sd = sdsum/n;
    printf("%.2f\n", sqrt(sd));
    return 0;
}