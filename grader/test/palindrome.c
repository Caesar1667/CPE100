#include <stdio.h>

// int countDigits(int num){
//     int count = 0;
//     while(num != 0){
//         count++;
//         num = num/10;
//     }
//     return count;
// }

int main(){
    int n, count = 0;
    scanf("%d",&n);
    //find digits of number
    while(n != 0){
        count++;
        n /= 10;
    }
    printf("%d", count);
}