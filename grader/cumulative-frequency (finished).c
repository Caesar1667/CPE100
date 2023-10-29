#include <stdio.h>

int main(){
    int n;
    do{
        scanf("%d", &n);
        if( n < 1 || n > 100){
            puts("The size you've assigned is over the limit.");
        }
    }while(n > 100 || n < 1);
    int Mid[n], Fin[n], Work[n];
    for(int i = 0; i < n; i++){
        do{
            scanf("%d%d%d", &Mid[i], &Fin[i], &Work[i]);
            if( Mid[i] < -20 || Mid[i] > 40 || Fin[i] < -20 || Fin[i] > 40 || Work[i] < -20 || Work[i] > 20){
                puts("The number you've entered is over the limit.");
            }
        }while(Mid[i] < -20 || Mid[i] > 40 || Fin[i] < -20 || Fin[i] > 40 || Work[i] < -20 || Work[i] > 20);
    }
    int score[n];
    for(int i = 0; i < n; i++){
        score[i] = Mid[i] + Fin[i] + Work[i]; 
        // printf("%d\n", score[i]);
    }  
    double gradeCount[5] = {0};
    for(int i = 0; i < n; i++){

        if(score[i] >= 80){
            gradeCount[0]++;
        
        if(score[i] >= 70){
            gradeCount[1]++;
        }
        if(score[i] >= 60){
            gradeCount[2]++;
        }
        if(score[i] >= 50){
            gradeCount[3]++;
        }
        if(score[i] >= 0 || score[i] <= 0){
            gradeCount[4]++;
        }
    }
    double average[5];

    for(int i = 0; i < 5; i++){
        average[i] = (gradeCount[i]/n) * 100;
        printf("%g %.2lf\n", gradeCount[i], average[i]);
        }
    
    return 0;
}