#include <stdio.h>
//Pansa Intawong 66070503474
int main(){
    int n;
    scanf("%d", &n);
    int m[n];
    for(int i = 0; i < n; i++) scanf("%d", &m[i]);
    int freq, max = 1, mode[n], modeCount = 0, k = 0, freqCount = 0;
    for(int i = 0;i < n; i++){
        freq = 0;
        for(int j = 0; j < n; j++){
            if(m[i] == m[j]) freq++;
        }
        if(freq > max){
            max = freq;
            mode[0] = m[i];
            modeCount = 1;
        }
        if(freq == max && m[i] != mode[0]){
            int Dupe = 0;
            for(k = 0; k < modeCount; k++){
                if(m[i] == mode[k]){
                    Dupe = 1;
                    break;
                }
            }
            if(Dupe != 1){
            mode[1] = m[i];
            modeCount++;
            }
        }
        // if()
    }
if(modeCount == 1){
    printf("%d", mode[0]);
}else if(modeCount > 1 && modeCount < 3){
    printf("%d %d\n", mode[0], mode[1]);
}else{
    printf("NONE");
}
// printf("%d", modeCount);
   return 0;
}